#include<iostream>
using namespace std;
 
double divide(double a, double b) {
    if (b == 0) {
        throw "Division by zero!";    // THROW a simple string (basic example)
    }
    return a / b;
}
 
int main() {
    try {
        cout << divide(10, 2) << endl;   // Works fine: prints 5
        cout << divide(10, 0) << endl;   // This line THROWS -- execution jumps to catch
        cout << "This line never runs." << endl;
    }
    catch (const char* msg) {              // CATCHES the thrown string
        cout << "Error caught: " << msg << endl;
    }
 
    cout << "Program continues normally after the catch block." << endl;
}
// Output:
// 5
// Error caught: Division by zero!
// Program continues normally after the catch block