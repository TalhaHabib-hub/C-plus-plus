
// // when we do constructor overloading we can dynamically initial objects, just like if i take user input firstly and after that if i decide to make an object (dynamically mean at run time at the time when program is running) ,, it is like a user if has putted a int or float for those imput their will run different constructers for them
// //how can we run constructor at run time //when we are using constructor how can we initialize objects dynamically

// /*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// #include<iostream>
// using namespace std;

// class BankDeposit{
//     int principle;
//     int years;
//     float interestRate;
//     float returnValue;

//     public:
//         BankDeposit(){} //to understand why writing this one important, go to line 48
//         BankDeposit(int p, int y, float r);// r can be a value like 0.04
//         BankDeposit(int p, int y, int r);// r can be a value like 14
//         void show();
// };
// BankDeposit::BankDeposit(int p, int y, float r){
//     principle = p;
//     years = y;
//     interestRate = r;
//     returnValue = principle;
//     for (int i = 0; i < y; i++)
//     {
//         returnValue = returnValue * (1+interestRate);
//     }
// }
// BankDeposit::BankDeposit(int p, int y, int r){
//     principle = p;
//     years = y;
//     interestRate = float(r)/100;
//     returnValue = principle;
//     for (int i = 0; i < y; i++)
//     {
//         returnValue = returnValue * (1 + interestRate);
//     }
// }
// void BankDeposit :: show(){
//     cout<<endl<<"Principle amount was "<<principle
//         << ". Return value after "<<years
//         << " years is "<<returnValue<<endl;
// }
// int main(){
//     BankDeposit bd1,bd2,bd3;//when we declare these it will suerly called all the constructor which resonates with them without that , without it the object would not be prepared
//     int p, y;
//     float r;
//     int R;
//     // bd3.show();
//     cout <<"Enter the value of p y and r "<<endl;
//     cin>>p>>y>>r;
//     bd1 = BankDeposit(p, y, r);
//     bd1.show();

//     cout <<"Enter the value of p y and R "<<endl;
//     cin>>p>>y>>R;
//     bd2 = BankDeposit(p, y, R);
//     bd1.show();

//     return 0;//as this function worked successfully.so it mean compiler was that much enough intelligent that he understood that if there is int it will run which constructor and what to run if the argument is float, it mean if we have to run int it will execute the constructor at line 32 line 17 constructor , it would show error
// }

/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// with the grace of Allah this one was my on try and I did it // but Talha I didn't really understand the line number 54 and 59 , also talha remeber this while looking at this program tha by deposite i mean putting money in the bank on thid day i am almost don't know that what is the meaning of this deposit// i think it means is also putting money in the bank as from the meaning
//  #include <iostream>
//  using namespace std;

// class Deposite
// {
//     int priniple;
//     float interestRate;
//     int years;
//     float returnValue;

// public:
//     Deposite() {};
//     Deposite(int p, int y, float r);
//     Deposite(int p, int y, int R);
//     // look talha if you uncomment this one it will show error because as you have made constructors this is for sure that any of the constructor should be called so just declaring tells the compiler that the objects for which the constructor will run need to have no arguments , so that is why it becomes necessary that there be should be an empty constructor it is just to decive the compiler that there exist a constructor don't be worru for it , we just allowing the object to be made and later on we will perform what ever we want to do with those object.
//     void show()
//     {
//         cout << "For the deposite of amount " << priniple
//              << ". at the rate of " << interestRate
//              << ". after " << years << " years you will get the total amount :"
//              << returnValue;
//     }
// };

// Deposite::Deposite(int p, int y, float r)
// {
//     priniple = p;
//     interestRate = r;
//     years = y;
//     returnValue = priniple;
//     for (int i = 0; i < years; i++)
//     {
//         returnValue *= (1 + interestRate);
//     }
// }
// Deposite::Deposite(int p, int y, int R)
// {
//     priniple = p;
//     interestRate = float(R) / 100; // i am doing this because i only want to get the intereset rate in decimals not in percentage , later on we we will see that we can do it also by using just the percentage too but think of it as a short cut for running this program . and also easy to perform and also it meets with the purpose of the teacher .
//     years = y;
//     returnValue = priniple;
//     for (int i = 0; i < years; i++)
//     {
//         returnValue *= (1 + interestRate);
//     }
// }

// int main()
// {

//     Deposite dp1, dp2, dp3; // here for all these three objects the empty  class will run its code . as talha i have made the overloading of constructors . the compiler by looking at the arguments we pass will run the respective costructors so lets go for them
//     int principlePrice, years;
//     int rateInPercent;
//     float rateInfloat; // in percent will say that 4. in float we can say that 0.04
//     cout << "Please Put the principle Price\n ";
//     cin >> principlePrice;
//     cout << "For how many Years you want to Deposite\n ";
//     cin >> years;
//     cout << "what should be the interest rate in percentage please\n";
//     cin >> rateInPercent;
//     dp1 = Deposite(principlePrice, years, rateInPercent); // will be in int
//     dp1.show();

//     cout << "\nPlease Put the principle Price\n ";
//     cin >> principlePrice;
//     cout << "For how many Years you want to Deposite \n";
//     cin >> years;
//     cout << "what should be the interest rate in float like '0.04' \n";
//     cin >> rateInfloat;
//     dp2 = Deposite(principlePrice, years, rateInfloat);// what i think what we did here is because we are wanting to run a constructor but the constructor runs at the time of declaration , as we didn't did that earlier we can again call those constructor by this way just write the object put equal sign right the constructor name through the arguments
//     dp2.show();

//     return 0;
// }

// This is i am doing it for the third time // This one written more beautifull

/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include <iostream>
using namespace std;

class BankDeposite
{
    int principle;
    int year;
    float textRate;
    float returnValue;

public:
    BankDeposite() {}
    BankDeposite(int p, int y, int r);
    BankDeposite(int p, int y, float r);
    void show();
};

BankDeposite::BankDeposite(int p, int y, int r)
{
    principle = p;
    year = y;
    textRate = float(r) / 100;
    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + textRate);
    }
}
BankDeposite::BankDeposite(int p, int y, float r)
{
    principle = p;
    year = y;
    textRate = r;
    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + r);
    }
}
void BankDeposite ::show()
{
    cout << "Deposite amount : " << principle << " .Placing for : " << year << " Years. Will make the Aomunt Return : Rs." << returnValue;
}
int main()
{
    BankDeposite bd1, bd2, bd3;
    int pr, ye, ra;
    float Ra;
    cout << "Deposite Amount : Rs";
    cin >> pr;
    cout << "Deposit for Years : ";
    cin >> ye;
    cout << "Text Rate in percentage : ";
    cin >> ra;
    bd1 = BankDeposite(pr, ye, ra);
    bd1.show();
    cout << "->(at rate of : " << ra << ")";

    cout << "\nDeposite Amount : Rs";
    cin >> pr;
    cout << "Deposite for Years  : ";
    cin >> ye;
    cout << "Text Rate in Decimal : ";
    cin >> Ra;
    bd2 = BankDeposite(pr, ye, Ra);
    bd2.show();
    cout << " ->at rate of : " << Ra << ")";

    return 0;
}