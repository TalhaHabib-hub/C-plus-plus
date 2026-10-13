// Composition is a strong whole-part relationship. The part's lifetime is controlled by the containing object.

#include <iostream>
using namespace std;
class Engine {
public:
    void start() { cout << "Engine started"; }
};
class Car {
    Engine engine; // Car owns its Engine
public:
    void start() { engine.start(); }
};
int main() {
    Car c;
    c.start();
}