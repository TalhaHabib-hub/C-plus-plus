#include <iostream>
using namespace std;
class Number {
    int value;
public:
    Number(int v) : value(v) {}
    int get() const { return value; }
};
int main() {
    const Number n(25);
    cout << n.get();
}