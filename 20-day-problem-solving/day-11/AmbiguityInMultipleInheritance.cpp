// If two base classes contain members with the same name, the derived class must resolve the ambiguity.

#include <iostream>
using namespace std;
class A {
public:
    void show() { cout << "A"; }
};
class B {
public:
    void show() { cout << "B"; }
};
class C : public A, public B {};
int main() {
    C c;
    c.A::show();
    cout << " ";
     c.B::show();
}

    