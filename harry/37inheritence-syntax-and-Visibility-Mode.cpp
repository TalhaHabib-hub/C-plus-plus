/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// #include <iostream>
// using namespace std;
// // Base class
// class Employee
// {
// public:
//     int id;
//     float salary;
//     Employee(int inpId)
//     {
//         id = inpId;
//         salary = 34.0;
//     }
//     Employee() {}// we have made a defult constructor becuase when you make a derived class automatically the base class of the constructor is called. without it it should through an error
// };
// // Derived class (using double braces shows that these things will be replaced)
// /*

// class {{derived-class-name }}: {{visibility-mode}} {{base-class-name}}
// {
//    class memebers/methods/etc...
// }
// // {{visibility-mode}} it is actually the visibility of the inheritence.
// // that  at which mode you are inheriting the public members.
// // you can inherit it publiclly or privately, if you are making it public the public members of the base class will be your public members.
// // if you write private the public part of the base class will be the private member of your derived class.
// // and remember Talha by default visibility mode is private , mean if you don't write and visibility (it doesn't shows error).
// */

// // Note:
// // 1. Defualt visibility mode is private
// // 2. Public Visibility Mode: Public members of the base class becomes public members of the derived class.
// // 3. Private Visibility Mode:Public members of the base class becomes private members of the derived class.
// // 4. The private element of the base class can't be inherited. Private means private you cann't inherit them later on in the program, in which way you are inheriting the public methods it is what called visibility mode

// // Creating a Programmer class derived from Employee Base class
// class Programmer : Employee
// {
// public:
// int languageCode;
//     Programmer(int inpId)
//     {
//         id = inpId;
//         languageCode = 9;
//     }
//     void getData()
//     {
//         cout << id << endl;
//     }
// };

// int main()
// {
//     Employee harry(1), rohan(2);
//     cout << harry.salary << endl;
//     cout << harry.salary << endl;

//     Programmer skillf(10);
//     cout << skillf.languageCode << endl;
//     // cout << skillf.ld << endl; this will get error ,though it was the public method of the base class but you have inherited it as a private so it will not allow the access
//     // cout<< skillf.id<<endl; if we a
//     skillf.getData();
//     return 0;
// }

/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// // My on try and i did it
// #include<iostream>
// using namespace std;

// class Employee{
//     float salary;
//     public:
//     int id;
//      Employee(int inpId){
//         id = inpId;
//         salary = 37.0;
//      }
//      void getData(){
//         cout<<id<<" "<<salary<<endl;
//      }
//      Employee(){} // did to remove a error call from line 87 // what happens according harry is that when we made a derived by default it calls the default constructor of base , he said we will look at later
// };

// class Programmer : public Employee{
//     int language;
//     public:
//     Programmer(int inpId){
//         id = inpId;
//         language = 9;
//     }
//     void show(){
//         cout<<id<<endl;
//     }
// };

// int main(){
//     Employee harry(5), ustaz(2);
//     harry.getData();
//     ustaz.getData();

//     Programmer Ronaldo(8);
//     Ronaldo.show();
//     cout<<Ronaldo.id<<endl;

//     return 0;
// }
// this one is sir's code without comment
#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

class Programmer : Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << harry.salary << endl;

    Programmer skillf(10);
    cout << skillf.languageCode << endl;
    skillf.getData();
    return 0;
}