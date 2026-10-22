// An abstract class defines a common interface and contains at least one pure virtual function.

#include <iostream>
using namespace std;
class Vehicle {
public:
    virtual void start() = 0;
    virtual ~Vehicle() = default;
};
class Car : public Vehicle {
public:
    void start() override { cout << "Car starts"; }
};
int main() {
    Car c;
    c.start();
}