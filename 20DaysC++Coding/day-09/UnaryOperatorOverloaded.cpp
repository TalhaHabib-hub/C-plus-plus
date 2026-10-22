// A unary operator works on one operand. Here we overload ++ for a simple counter object.

#include <iostream>
using namespace std;
class Counter {
    int x;
public:
    Counter(int n = 0) : x(n) {}
    void operator++() { ++x; }
    void show() const { cout << x; }
};
int main() {
    Counter c(4);
    ++c;
    c.show();
}