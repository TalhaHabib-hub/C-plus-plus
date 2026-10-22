#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 0;

    try {
        if (b == 0)
            throw "Cannot divide by zero!";   // throw a string
        cout << a / b << endl;
    }
    catch (const char* msg) {                 // catch the string
        cout << "Error: " << msg << endl;
    }

    cout << "Program continues..." << endl;
    return 0;
}