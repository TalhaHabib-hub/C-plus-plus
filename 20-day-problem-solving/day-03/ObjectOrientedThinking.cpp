#include <iostream>
using namespace std;
class BankAccount {
public:
    double balance = 0;
    void deposit(double amount) {
        balance += amount;
    }
};
int main() {
    BankAccount a;
    a.deposit(1000);
    cout << a.balance;
}