// #include <iostream>
// using namespace std;
// class InsufficientFundsException
// { // A CUSTOM exception class
// private:
//   double shortfall;

// public:
//   InsufficientFundsException(double s) : shortfall(s) {}
//   double getShortfall() const { return shortfall; }
//   string what() const { return "Insufficient funds for this withdrawal."; }
// };

// class BankAccount
// {
// private:
//   double balance;

// public:
//   BankAccount(double b) : balance(b) {}

//   void withdraw(double amount)
//   {
//     if (amount > balance)
//     {
//       throw InsufficientFundsException(amount - balance); // THROW an OBJECT
//     }
//     balance -= amount;
//   }
// };

// int main()
// {
//   BankAccount acc(100);
//   try
//   {
//     acc.withdraw(150);
//   }
//   catch (const InsufficientFundsException &e)
//   { // CATCH by const reference (best practice)
//     cout << e.what() << " Short by: $" << e.getShortfall() << endl;
//   }
// }
// // Output: Insufficient funds for this withdrawal. Short by: $5

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class BanksClientMaker;
vector <BanksClientMaker> clients;
class ErrorHandlingHere{
  float askedAmount;

public:
  ErrorHandlingHere(float askedAmount){
    this->askedAmount = askedAmount;
  }
  float getShortfall() const{
    return askedAmount;
  }
  void cause(){
    cout << "Your are short by $" << askedAmount << endl;
  }
};

class BanksClientMaker {
  string name;
  int idCard;
  float amount;

public:
  BanksClientMaker(string name,int idCard,float firstAmount):name(name),idCard(idCard),amount(firstAmount)
  {

  }
  void depositing(float depositingMoney){
    amount += depositingMoney;
  }
  void withdrawing(float withdrawingAmount){
    if (withdrawingAmount>amount){
      throw ErrorHandlingHere(amount - withdrawingAmount);
    }
    amount -= withdrawingAmount;
  }
  string getName() const{
    return name;
  }
  int getIdCard() const{
    return idCard;
  }
  float getAmount() const{
    return amount;
  }
};
string loweringFunction(string &permission){
  for (int i; i < permission.length();i++){
    permission[i] = tolower(permission[i]);
  }
  return permission;
}
void makeAccout(){
  string name;
  int idCard;
  float firstAmount;
  cout<<"Enter your name: ";
  cin>>name;
  cout<<"Enter your ID card number: ";
  cin>>idCard;
  cout<<"Enter your first amount to deposit: ";
  cin>>firstAmount;
  clients.push_back(BanksClientMaker(name,idCard,firstAmount));
}
void deposit(){
  float depositAmount;
  cout<<"Enter Amount to deposit: ";
  cin>>depositAmount;
  clients.back().depositing(depositAmount);
  cout<<"Deposited Successfully!"<<endl;
}
void witdraw(){
  float withdrawAmount;
  cout<<"Enter Amount to withdraw: ";
  cin>>withdrawAmount;
  BanksClientMaker client("name",123,0);
  try{
    clients.back().withdrawing(withdrawAmount);
    cout<<"Withdrawn Successfully!"<<endl;
  }catch(ErrorHandlingHere &e){
    e.cause();
  }
}
int main (){
  string permission;
  string choice;
  cout << "Assalmualikm make account Yes/No:";
  cin >> permission;
  permission = loweringFunction(permission);
  if (permission == "yes"){
      while (permission == "yes")
      {
        makeAccout();
        cout<<"Account made successfully!"<<endl;
        cout<<"Want to deposit,withdraw money or make another account Yes/No"<<endl;
        cin >> choice;
        choice = loweringFunction(choice);
        enum Choices { depositing, withdraw, yes, defaulting };
        Choices choiceEnum = choice == "deposit" ? depositing : choice == "withdraw" ? withdraw : choice == "yes" ? yes : defaulting;
        switch (choiceEnum)
        {
        case depositing:
        depositing:
          deposit();
          break;
        case withdraw:
        withdraw:
          witdraw();
          break;
        case yes:
        yes:
          makeAccout();
          break;
       
        default:
        defaulting:
          cout << "if you don't want any of the choice thanks for visiting!" << endl;
          return 0;
        }
        cout << "Want to deposit,withdraw money or make another account Yes/No" << endl;
        cin >> choice;  
        choice = loweringFunction(choice);
        choiceEnum = choice == "deposit" ? depositing : choice == "withdraw" ? withdraw : choice == "yes" ? yes : defaulting;
        if (choiceEnum == depositing){
          goto depositing;
        }else if (choiceEnum == withdraw){
          goto withdraw;  
        } else if (choiceEnum == yes){
          goto yes;  
        }else{
          goto defaulting;  
      }
}
}else{
  cout<<"Not making an account. Thank you for visiting!"<<endl;
}
  
}