// A pure virtual function makes a class abstract. An abstract class cannot normally be instantiated directly.

#include <iostream>
using namespace std;
class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() = default;
};
class Square : public Shape {
    double side;
public:
    Square(double s) : side(s) {}
    double area() const override { return side * side; }
};
int main() {
    Square s(5);
    cout << s.area();
}