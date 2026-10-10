#include <iostream>
using namespace std;

double divide(int a, int b) {
    if (b == 0)
        throw 0;              // throw an int
    return (double)a / b;
}

int main() {
    try {
        cout << divide(10, 2) << endl;   // 5
        cout << divide(10, 0) << endl;   // throws
        cout << "This line is skipped" << endl;
    }
    catch (int e) {
        cout << "Division by zero error, code: " << e << endl;
    }
    return 0;
}