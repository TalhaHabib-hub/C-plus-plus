// A derived class can provide a new implementation for an inherited virtual function.

#include <iostream>
using namespace std;
class Animal {
public:
    virtual void sound() const { cout << "Animal sound"; }
};
class Dog : public Animal {
public:
    void sound() const override { cout << "Bark"; }
};
int main() {
    Dog d;
    d.sound();
}