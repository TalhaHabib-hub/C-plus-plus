// Standard exception objects should normally be caught by const reference to avoid copying and preserve polymorphic
// information.

#include <iostream>
#include <stdexcept>
using namespace std;
int main() {
    try {
        throw runtime_error("Something failed");
    }
    catch (const exception& e) {
        cout << e.what();
    }
}