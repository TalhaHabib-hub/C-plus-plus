// Different exception types can be handled by different catch blocks.

#include <iostream>
#include <stdexcept>
using namespace std;
int main() {
    try {
        throw runtime_error("File problem");
    }
    catch (const invalid_argument& e) {
        cout << "Input error";
    }
    catch (const runtime_error& e) {
        cout << e.what();
    }
}