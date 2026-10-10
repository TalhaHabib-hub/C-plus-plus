/* Write a C++ Program to demonstrate the concept of the call sequence of Constructors in single inheritance. */


#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base class constructor called" << endl;
    }
    ~Base() {
        cout << "Base class destructor called" << endl;
    }

};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor called" << endl;
    }
    ~Derived() {
        cout << "Derived class destructor called" << endl;
    }
};

int main() {
    Derived obj;
    return 0;
}