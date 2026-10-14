// Inheritance lets a derived class reuse and extend a base class.

#include <iostream>
using namespace std;
class Animal {
public:
    void eat() { cout << "Eating\n"; }
};
class Dog : public Animal {
public:
    void bark() { cout << "Barking"; }
};
int main() {
    Dog d;
    d.eat();
   