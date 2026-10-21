// A function can reject invalid input by throwing an exception.

#include <iostream>
#include <stdexcept>
using namespace std;
double divide(double a, double b) {
    if (b == 0)
        throw invalid_argument("Division by zero");
    return a / b;
}
int main() {
    try {
        cout << divide(10, 0);
    }
    catch (const invalid_argument& e) {
        cout << e.what();
    }
}