#include <iostream>
using namespace std;
class Account {
private:
    double balance = 0;
public:
    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }
    double getBalance() const {
        return balance;
    }
};
int main() {
    Account a;
    a.deposit(500);
    cout << a.getBalance();
}