// A vector of base pointers can hold objects of several derived classes. Virtual functions choose the correct behavior.

#include <iostream>
#include <vector>
#include <memory>
using namespace std;
class Shape {
public:
    virtual void draw() const = 0;
    virtual ~Shape() = default;
};
class Circle : public Shape {
public:
    void draw() const override { cout << "Circle is drawn \n"; }
};
class Square : public Shape {
public:
    void draw() const override { cout << "Square is drawn \n"; }
};
int main() {
    vector<unique_ptr<Shape>> shapes;
    shapes.push_back(make_unique<Circle>());
    shapes.push_back(make_unique<Square>());
    for (const auto& s : shapes) s->draw();
}