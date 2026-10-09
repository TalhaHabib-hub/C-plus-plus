#include <iostream>
using namespace std;
class Counter {
    int value = 0;
public:
    void increment() { ++value; }
    int get() const { return value; }
};
int main() {
    Counter c;
    c.increment();
    c.increment();
    cout << c.get();
}