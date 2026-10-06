#include <iostream>
using namespace std;
class Calculator {
public:
    int add(int, int);
};
int Calculator::add(int a, int b) {
    return a + b;
}
int main() {
    Calculator c;
    cout << c.add(4, 6);
}