#include <iostream>
using namespace std;

void inner() {
    try {
        throw "Problem in inner()";
    }
    catch (const char* msg) {
        cout << "inner caught: " << msg << endl;
        throw;                       // send it to the outer caller
    }
}

int main() {
    try {
        inner();
    }
    catch (const char* msg) {
        cout << "main caught: " << msg << endl;
    }
    return 0;
}