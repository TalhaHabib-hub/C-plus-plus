// When deleting a derived object through a base pointer, the base destructor should be virtual so the derived destructor
// runs correctly.

#include <iostream>
using namespace std;
class Base {
public:
    virtual ~Base() { cout << "Base destructor\n"; }
};
class Derived : public Base {
public:
    ~Derived() { cout << "Derived destructor\n"; }
};
int main() {
    Base* p = new Derived;
    delete p;
}
//  polymorphic base classes should normally have a virtual destructor.