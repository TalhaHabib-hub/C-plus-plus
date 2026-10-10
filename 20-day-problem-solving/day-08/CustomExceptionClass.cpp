//we 
#include <iostream>
#include <exception>
#include <string>
using namespace std;

class InsufficientFunds : public exception {
    string message;
public:
    InsufficientFunds(double balance, double amount) {
        message = "Need " + to_string(amount - balance) + " more to withdraw.";
    }
    const char* what() const noexcept override {
        return message.c_str();
    }
};

class Account {
    double balance;
public:
    Account(double b) : balance(b) {}
    void withdraw(double amount) {
        if (amount > balance)
            throw InsufficientFunds(balance, amount);
        balance -= amount;
        cout << "Withdrawn: " << amount << ", left: " << balance << endl;
    }
};

int main() {
    Account acc(500);
    try {
        acc.withdraw(200);
        acc.withdraw(400);     // fails
    }
    catch (InsufficientFunds& e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}