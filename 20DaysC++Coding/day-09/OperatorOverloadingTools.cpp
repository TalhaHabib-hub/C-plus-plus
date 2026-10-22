// Not every operator can be overloaded, and you cannot invent a new operator. At least one operand must be a
// user-defined type.

#include <iostream>
using namespace std;
class Number {
public:
    int x;
    Number(int n) : x(n) {}
    Number operator*(const Number& n) const {
        return Number(x * n.x);// creates a temporary Number object
    // it exists only for this statement, then is destroyed
    }
};
int main() {
    Number a(3), b(4);
    cout << (a * b).x;
}