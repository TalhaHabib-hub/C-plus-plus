// When a derived object is created, the base constructor runs before the derived constructor.

#include <iostream>
using namespace std;
class Base {
public:
    Base() { cout << "Base\n"; }
};
class Derived : public Base {
public:
    Derived() { cout << "Derived\n"; }
};
int main() {
    Derived d;
}