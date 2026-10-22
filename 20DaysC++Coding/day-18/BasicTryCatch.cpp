// Exceptions separate normal program flow from error handling. Throw an exception where an error is detected and
// catch it where it can be handled.

#include <iostream>
using namespace std;
int main() {
    try {
        throw 10;
    }
    catch (int x) {
        cout << "Error code: " << x;
    }
}