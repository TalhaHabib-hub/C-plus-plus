/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
using namespace std;
//----------------------------------No# 1-----------------------------------------
// Why the const is used and why the addressing is taken mean the original value is taken not the copy one? and when I removed the constant I had ot remove the & sign too why?Talha earlier before,the string was constant written and b was &b and also the display function was like this ...()constant{...
/*
class BasicCar {
    // By default everything inside a class is PRIVATE (see Section 2).
    string brand;   // private member variable
    int    speed;   // private member variable

public:
    // A simple member function (method)
    void set( string b, int s) {
        brand = b;
        speed = s;
    }

    void display()  {
        cout << "Car: " << brand << " | Speed: " << speed << " km/h\n";
    }
}Car1;
int main(){
    Car1.set("Bugatti",350);
    Car1.display();
    return 0;
}*/
// Result: Car: Bugatti | Speed: 350km/h"

//----------------------------------No# 2-----------------------------------------
// The same here Talha using the constant and & no worries, even without them the program is running I don't know but why they are in the code leaving them here because you will remember the question in your mind that why these are in the program
/*
class BankAccount {
private:
    double balance;          // internal state — hidden from the outside world
    string accountNumber;    // sensitive: must not be directly modified

protected:
    string ownerName;        // derived classes can read/write this

public:
    // Public interface: the ONLY way the outside world interacts with this class
    BankAccount(const string& owner, const string& accNum, double initialBalance)
        : balance(initialBalance), accountNumber(accNum), ownerName(owner) {}
// ()a(i),b(j){}<---used brain but look at the semicolon
    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }

    bool withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
            return true;
        }
        return false;
    }

    double getBalance() const { return balance; }   // read-only access to private
    string getAccountNumber() const { return accountNumber; }
}member1("Talha Habib","talhahabib8426",0);
int main(){
member1.deposit(200000);
member1.withdraw(45000);
cout<<"Balance       : "<<member1.getBalance()<<endl;
cout<<"Account Number: "<<member1.getAccountNumber()<<endl;
member1.withdraw(34000);
cout<<"Balance       : "<<member1.getBalance()<<endl;



    return 0;
}*/
// resutl : Balance       : 155000
//          Account Number: talhahabib8426
//          Balance       : 121000

//----------------------------------No# 3-----------------------------------------
//constructor is a member function but special, has no return type
/*
class Point {
public:
    double x, y;

    // (a) Default constructor
    //     Called when: Point p;  or  new Point;
    Point() : x(0.0), y(0.0) {
        cout << "[Point default ctor] (" << x << ", " << y << ")\n";
    }

    // (b) Parameterized constructor
    //     Called when: Point p(3.0, 4.0);
    Point(double xVal, double yVal) : x(xVal), y(yVal) {
        cout << "[Point param ctor] (" << x << ", " << y << ")\n";
    }

    // (c) Copy constructor
    //     Called when: Point p2 = p1;  or  Point p2(p1);
    //     The compiler's default does member-wise copy (shallow).
    //     We write our own here just to show it explicitly.
    Point(const Point& copyOfThrownObj) : x(copyOfThrownObj.x), y(copyOfThrownObj.y) {
        cout << "[Point copy ctor] (" << x << ", " << y << ")\n";
    }

    // (d) Delegating constructor (C++11)
    //     Calls the parameterized ctor so we don't duplicate initialisation.
    explicit Point(double val) : Point(val, val) {
        // 'explicit' prevents: Point p = 5.0;  (accidental implicit conversion)
        cout << "[Point delegate ctor]\n";
    }

    void print() const { cout << "(" << x << ", " << y << ")\n"; }
};

int main (){
    // Point p; // first one called
    // Point p(0.3,0.9); // second one is called

    // Point p(2,4.8);
    // Point P2(p); // Third one is called

    Point P(3.4); // it called the fourth one but I didn't really understand the term here like the explicit amd then the point(val, val) term
    P.print();
    Point P2(3.5,34.4);
    P2.print(); // may be Talha this function constructor is giving one value to both variable and Point(val, val)-- mean -- assing to the variables of Point class the val, val and still not clear with the explicit key word

    return 0;
}*/
// Answer[Point param ctor] (3.4, 3.4)
//       [Point delegate ctor]
//       (3.4, 3.4)
//       [Point param ctor] (3.5, 34.4)
//       (3.5, 34.4)

//----------------------------------No# 4-----------------------------------------
/*
class Temperature {
    double celsius;
    mutable double cachedFahrenheit;   // mutable: const function may update it
    mutable bool   cacheValid;

public:
    Temperature(double c) : celsius(c), cachedFahrenheit(0), cacheValid(false) {}

    // const function — can be called on const Temperature objects
    double toFahrenheit() const {
        if (!cacheValid) {
            cachedFahrenheit = celsius * 9.0 / 5.0 + 32.0;
            cacheValid = true;   // OK because cachedFahrenheit is mutable
        }
        return cachedFahrenheit;
    }

    void setCelsius(double c) {
        celsius    = c;
        cacheValid = false;   // invalidate cache
    }

    double getCelsius() const { return celsius; }
};
int main (){
Temperature T1(37);
cout<<"To Fahrenhei   : "<<T1.toFahrenheit()<<endl;
T1.setCelsius(87);
cout<<"Celciuse setted: "<<T1.getCelsius()<<endl;
    return 0;
}*/


// result: To Fahrenhei    : 98.6
//         Celciuse setted : 87