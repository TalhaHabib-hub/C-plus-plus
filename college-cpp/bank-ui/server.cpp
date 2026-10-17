#define WIN32_LEAN_AND_MEAN
#include <winsock2.h>
#include <ws2tcpip.h>

#include <algorithm>
#include <cctype>
#include <chrono>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>
#include <vector>

#define main bank_console_main
#include "../CustomExceptionClasses.cpp"
#undef main

namespace {
constexpr unsigned short PORT = 8080;
constexpr std::size_t MAX_REQUEST_SIZE = 1024 * 1024;

struct Transaction {
  std::string type;
  float amount;
  long long date;
};

struct HttpRequest {
  std::string method;
  std::string path;
  std::string body;
};

std::vector<std::vector<Transaction>> transactionHistory;

std::string jsonEscape(const std::string &value) {
  std::ostringstream escaped;
  for (unsigned char character : value) {
    switch (character) {
    case '"':
      escaped << "\\\"";
      break;
    case '\\':
      escaped << "\\\\";
      break;
    case '\b':
      escaped << "\\b";
      break;
    case '\f':
      escaped << "\\f";
      break;
    case '\n':
      escaped << "\\n";
      break;
    case '\r':
      escaped << "\\r";
      break;
    case '\t':
      escaped << "\\t";
      break;
    default:
      if (character < 0x20) {
        escaped << "\\u" << std::hex << std::setw(4) << std::setfill('0')
                << static_cast<int>(character) << std::dec;
      } else {
        escaped << character;
      }
    }
  }
  return escaped.str();
}

long long nowMilliseconds() {
  return std::chrono::duration_cast<std::chrono::milliseconds>(
             std::chrono::system_clock::now().time_since_epoch())
      .count();
}

std::string accountJson(std::size_t accountIndex) {
  if (accountIndex >= clients.size()) return "{}";
  const BanksClientMaker &account = clients[accountIndex];
  std::ostringstream json;
  json << "{\"index\":" << accountIndex << ",\"account\":{\"name\":\""
       << jsonEscape(account.getName()) << "\",\"id\":" << account.getIdCard()
       << ",\"balance\":" << std::fixed << std::setprecision(2)
       << account.getAmount() << ",\"transactions\":[";

  const std::vector<Transaction> &transactions = transactionHistory[accountIndex];
  for (std::size_t transactionIndex = 0; transactionIndex < transactions.size(); ++transactionIndex) {
    if (transactionIndex > 0) json << ',';
    const Transaction &transaction = transactions[transactionIndex];
    json << "{\"type\":\"" << transaction.type << "\",\"amount\":"
         << std::fixed << std::setprecision(2) << transaction.amount
         << ",\"date\":" << transaction.date << '}';
  }
  json << "]}}";
  return json.str();
}

std::string formDecode(const std::string &value) {
  std::string decoded;
  decoded.reserve(value.size());
  for (std::size_t index = 0; index < value.size(); ++index) {
    if (value[index] == '+') {
      decoded.push_back(' ');
    } else if (value[index] == '%' && index + 2 < value.size()) {
      char hex[3] = {value[index + 1], value[index + 2], '\0'};
      char *end = nullptr;
      const long byte = std::strtol(hex, &end, 16);
      if (end == hex || *end != '\0') return "";
      decoded.push_back(static_cast<char>(byte));
      index += 2;
    } else if (value[index] == '%') {
      return "";
    } else {
      decoded.push_back(value[index]);
    }
  }
  return decoded;
}

bool formValue(const std::string &body, const std::string &key, std::string &value) {
  std::size_t start = 0;
  while (start <= body.size()) {
    const std::size_t end = body.find('&', start);
    const std::string pair = body.substr(start, end == std::string::npos ? end : end - start);
    const std::size_t equals = pair.find('=');
    if (equals != std::string::npos && formDecode(pair.substr(0, equals)) == key) {
      value = formDecode(pair.substr(equals + 1));
      return true;
    }
    if (end == std::string::npos) break;
    start = end + 1;
  }
  return false;
}

bool parseFloatField(const std::string &body, const std::string &key, float &value) {
  std::string text;
  if (!formValue(body, key, text) || text.empty()) return false;
  char *end = nullptr;
  const float parsed = std::strtof(text.c_str(), &end);
  if (end == text.c_str() || *end != '\0' || !std::isfinite(parsed)) return false;
  value = parsed;
  return true;
}

bool parseIdField(const std::string &body, int &value) {
  std::string text;
  if (!formValue(body, "id", text) || text.empty()) return false;
  char *end = nullptr;
  const long parsed = std::strtol(text.c_str(), &end, 10);
  if (end == text.c_str() || *end != '\0' || parsed < 1 ||
      parsed > std::numeric_limits<int>::max()) {
    return false;
  }
  value = static_cast<int>(parsed);
  return true;
}

bool parseIndexField(const std::string &body, std::size_t &value) {
  std::string text;
  if (!formValue(body, "index", text) || text.empty()) return false;
  char *end = nullptr;
  const unsigned long long parsed = std::strtoull(text.c_str(), &end, 10);
  if (end == text.c_str() || *end != '\0' ||
      parsed > std::numeric_limits<std::size_t>::max()) {
    return false;
  }
  value = static_cast<std::size_t>(parsed);
  return true;
}

bool sameName(const std::string &left, const std::string &right) {
  if (left.size() != right.size()) return false;
  for (std::size_t index = 0; index < left.size(); ++index) {
    if (std::tolower(static_cast<unsigned char>(left[index])) !=
        std::tolower(static_cast<unsigned char>(right[index]))) {
      return false;
    }
  }
  return true;
}

bool sendAll(SOCKET client, const std::string &data) {
  std::size_t sent = 0;
  while (sent < data.size()) {
    const int result = send(client, data.data() + sent,
                            static_cast<int>(data.size() - sent), 0);
    if (result == SOCKET_ERROR || result == 0) return false;
    sent += static_cast<std::size_t>(result);
  }
  return true;
}

void respond(SOCKET client, int status, const std::string &statusText,
             const std::string &contentType, const std::string &body) {
  std::ostringstream response;
  response << "HTTP/1.1 " << status << ' ' << statusText << "\r\n"
           << "Content-Type: " << contentType << "\r\n"
           << "Content-Length: " << body.size() << "\r\n"
           << "Connection: close\r\n"
           << "Cache-Control: no-store\r\n"
           << "X-Content-Type-Options: nosniff\r\n"
           << "Content-Security-Policy: default-src 'self'; img-src 'self'; style-src 'self'; "
              "script-src 'self'; base-uri 'none'; frame-ancestors 'none'\r\n\r\n"
           << body;
  sendAll(client, response.str());
}

bool readRequest(SOCKET client, HttpRequest &request) {
  std::string received;
  char buffer[4096];
  std::size_t headerEnd = std::string::npos;
  while (headerEnd == std::string::npos) {
    const int count = recv(client, buffer, sizeof(buffer), 0);
    if (count <= 0) return false;
    received.append(buffer, static_cast<std::size_t>(count));
    if (received.size() > MAX_REQUEST_SIZE) return false;
    headerEnd = received.find("\r\n\r\n");
  }

  const std::string headers = received.substr(0, headerEnd);
  const std::size_t firstLineEnd = headers.find("\r\n");
  const std::string firstLine = headers.substr(0, firstLineEnd);
  std::istringstream line(firstLine);
  if (!(line >> request.method >> request.path)) return false;

  std::size_t contentLength = 0;
  std::size_t headerLine = firstLineEnd;
  while (headerLine != std::string::npos) {
    const std::size_t nextLine = headers.find("\r\n", headerLine + 2);
    const std::string header = headers.substr(
        headerLine + 2,
        nextLine == std::string::npos ? nextLine : nextLine - headerLine - 2);
    const std::size_t colon = header.find(':');
    if (colon != std::string::npos) {
      std::string name = header.substr(0, colon);
      std::transform(name.begin(), name.end(), name.begin(),
                     [](unsigned char character) { return static_cast<char>(std::tolower(character)); });
      if (name == "content-length") {
        const std::string length = header.substr(colon + 1);
        char *end = nullptr;
        const unsigned long parsed = std::strtoul(length.c_str(), &end, 10);
        if (end == length.c_str() || *end != '\0' || parsed > MAX_REQUEST_SIZE) return false;
        contentLength = static_cast<std::size_t>(parsed);
      }
    }
    headerLine = nextLine;
  }

  const std::size_t bodyStart = headerEnd + 4;
  while (received.size() < bodyStart + contentLength) {
    const int count = recv(client, buffer, sizeof(buffer), 0);
    if (count <= 0) return false;
    received.append(buffer, static_cast<std::size_t>(count));
    if (received.size() > MAX_REQUEST_SIZE + bodyStart) return false;
  }
  request.body = received.substr(bodyStart, contentLength);
  return true;
}

void serveStaticFile(SOCKET client, const std::string &path) {
  std::string filename;
  std::string contentType;
  if (path == "/" || path == "/index.html") {
    filename = "index.html";
    contentType = "text/html; charset=utf-8";
  } else if (path == "/styles.css") {
    filename = "styles.css";
    contentType = "text/css; charset=utf-8";
  } else if (path == "/app.js") {
    filename = "app.js";
    contentType = "text/javascript; charset=utf-8";
  } else if (path == "/images/mosque.jpg") {
    filename = "images/mosque.jpg";
    contentType = "image/jpeg";
  } else if (path == "/images/faith.jpg") {
    filename = "images/faith.jpg";
    contentType = "image/jpeg";
  } else if (path == "/images/community.jpg") {
    filename = "images/community.jpg";
    contentType = "image/jpeg";
  } else {
    respond(client, 404, "Not Found", "application/json; charset=utf-8",
            "{\"error\":\"Not found.\"}");
    return;
  }

  std::ifstream file(filename, std::ios::binary);
  if (!file) {
    respond(client, 500, "Internal Server Error", "application/json; charset=utf-8",
            "{\"error\":\"Could not read the UI file. Start the server from bank-ui.\"}");
    return;
  }
  const std::string contents((std::istreambuf_iterator<char>(file)),
                             std::istreambuf_iterator<char>());
  respond(client, 200, "OK", contentType, contents);
}

void handleRequest(SOCKET client, const HttpRequest &request) {
  if (request.method == "GET" &&
      (request.path == "/" || request.path == "/index.html" ||
       request.path == "/styles.css" || request.path == "/app.js" ||
       request.path == "/images/mosque.jpg" ||
       request.path == "/images/faith.jpg" ||
       request.path == "/images/community.jpg")) {
    serveStaticFile(client, request.path);
    return;
  }

  if (request.method != "POST") {
    respond(client, 405, "Method Not Allowed", "application/json; charset=utf-8",
            "{\"error\":\"Method not allowed.\"}");
    return;
  }

  if (request.path == "/api/accounts") {
    std::string name;
    int id = 0;
    float openingBalance = 0.0f;
    if (!formValue(request.body, "name", name) || name.empty() ||
        name.size() > 60 || !parseIdField(request.body, id) ||
        !parseFloatField(request.body, "balance", openingBalance) ||
        openingBalance < 0.0f) {
      respond(client, 400, "Bad Request", "application/json; charset=utf-8",
              "{\"error\":\"Enter a name, a positive ID number, and a non-negative opening balance.\"}");
      return;
    }

    for (const BanksClientMaker &existing : clients) {
      if (existing.getIdCard() == id) {
        respond(client, 409, "Conflict", "application/json; charset=utf-8",
                "{\"error\":\"That account number is already in use. Choose another one.\"}");
        return;
      }
    }

    clients.push_back(BanksClientMaker(name, id, openingBalance));
    transactionHistory.emplace_back();
    if (openingBalance > 0.0f) {
      transactionHistory.back().push_back({"deposit", openingBalance, nowMilliseconds()});
    }
    respond(client, 201, "Created", "application/json; charset=utf-8",
            accountJson(clients.size() - 1));
    return;
  }

  if (request.path == "/api/login") {
    std::string name;
    int id = 0;
    if (!formValue(request.body, "name", name) || name.empty() ||
        !parseIdField(request.body, id)) {
      respond(client, 400, "Bad Request", "application/json; charset=utf-8",
              "{\"error\":\"Enter your account holder name and account number.\"}");
      return;
    }

    for (std::size_t accountIndex = 0; accountIndex < clients.size(); ++accountIndex) {
      if (clients[accountIndex].getIdCard() == id &&
          sameName(clients[accountIndex].getName(), name)) {
        respond(client, 200, "OK", "application/json; charset=utf-8",
                accountJson(accountIndex));
        return;
      }
    }
    respond(client, 404, "Not Found", "application/json; charset=utf-8",
            "{\"error\":\"We couldn't find an account with that name and account number.\"}");
    return;
  }

  if (request.path == "/api/deposit" || request.path == "/api/withdraw") {
    float amount = 0.0f;
    std::size_t accountIndex = 0;
    if (!parseFloatField(request.body, "amount", amount) || amount <= 0.0f ||
        !parseIndexField(request.body, accountIndex) || accountIndex >= clients.size()) {
      respond(client, 400, "Bad Request", "application/json; charset=utf-8",
              "{\"error\":\"Your account could not be found, or the amount is invalid.\"}");
      return;
    }

    if (request.path == "/api/deposit") {
      clients[accountIndex].depositing(amount);
      transactionHistory[accountIndex].push_back({"deposit", amount, nowMilliseconds()});
    } else {
      try {
        clients[accountIndex].withdrawing(amount);
      } catch (const ErrorHandlingHere &error) {
        std::ostringstream body;
        body << "{\"error\":\"Insufficient funds. Short by $"
             << std::fixed << std::setprecision(2) << std::abs(error.getShortfall())
             << ".\"}";
        respond(client, 400, "Bad Request", "application/json; charset=utf-8",
                body.str());
        return;
      }
      transactionHistory[accountIndex].push_back({"withdraw", amount, nowMilliseconds()});
    }
    respond(client, 200, "OK", "application/json; charset=utf-8",
            accountJson(accountIndex));
    return;
  }

  respond(client, 404, "Not Found", "application/json; charset=utf-8",
          "{\"error\":\"Not found.\"}");
}
} // namespace

int main() {
  WSADATA winsockData;
  if (WSAStartup(MAKEWORD(2, 2), &winsockData) != 0) {
    std::cerr << "Could not initialize Winsock.\n";
    return 1;
  }

  SOCKET server = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
  if (server == INVALID_SOCKET) {
    std::cerr << "Could not create the server socket.\n";
    WSACleanup();
    return 1;
  }

  sockaddr_in address{};
  address.sin_family = AF_INET;
  address.sin_addr.s_addr = htonl(INADDR_LOOPBACK);
  address.sin_port = htons(PORT);
  if (bind(server, reinterpret_cast<sockaddr *>(&address), sizeof(address)) == SOCKET_ERROR ||
      listen(server, SOMAXCONN) == SOCKET_ERROR) {
    std::cerr << "Could not listen on 127.0.0.1:" << PORT
              << ". Is another server already using this port?\n";
    closesocket(server);
    WSACleanup();
    return 1;
  }

  std::cout << "Islamic Bank is running at http://127.0.0.1:" << PORT
            << "/\nClose this window to stop the server.\n";

  while (true) {
    SOCKET client = accept(server, nullptr, nullptr);
    if (client == INVALID_SOCKET) {
      std::cerr << "A browser connection could not be accepted.\n";
      continue;
    }
    HttpRequest request;
    if (readRequest(client, request)) {
      handleRequest(client, request);
    } else {
      respond(client, 400, "Bad Request", "application/json; charset=utf-8",
              "{\"error\":\"Invalid or oversized request.\"}");
    }
    shutdown(client, SD_SEND);
    closesocket(client);
  }

  closesocket(server);
  WSACleanup();
  return 0;
}
