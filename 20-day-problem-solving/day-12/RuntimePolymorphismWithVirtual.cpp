// A base pointer/reference can refer to a derived object, and a virtual function selects the derived override at runtime.

#include <iostream>
using namespace std;
class Animal {
public:
    virtual void sound() const { cout << "Animal"; }
    virtual ~Animal() = default;
};
class Cat : public Animal {
public:
    void sound() const override { cout << "Meow"; }
};
int main() {
    Animal* a = new Cat;
    a->sound();
    delete a;
}