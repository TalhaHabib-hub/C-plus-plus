// Combine classes, encapsulation, constructors, static data, inheritance, polymorphism, STL, streams, and exceptions in
// one small exam-style design.

#include <iostream>
#include <vector>
#include <memory>
#include <stdexcept>
using namespace std;
class Account
{
  string owner;
  double balance;
  static int count;

public:
  Account(string n, double b) : owner(n), balance(b) { ++count; }
  virtual ~Account() = default;
  void deposit(double amount)
  {
    if (amount <= 0)
      throw invalid_argument("Invalid deposit");
    balance += amount;
  }
  virtual void show() const
  {
    cout << owner << ": " << balance << '\n';
  }
  static int totalAccounts() { return count; }
};
int Account::count = 0;
class Savings : public Account
{
public:
  Savings(string n, double b) : Account(n, b) {}
  void show() const override
  {
    cout << "Savings -> ";
    Account::show();
  }
};
int main()
{
  try
  {
    vector<unique_ptr<Account>> accounts;
    accounts.push_back(make_unique<Savings>("Ali", 1000));
    accounts[0]->deposit(250);
    accounts[0]->show();
    cout << "Accounts: "
         << Account::totalAccounts();
  }
  catch (const exception &e)
  {
    cout << "Error: " << e.what();
  }
}