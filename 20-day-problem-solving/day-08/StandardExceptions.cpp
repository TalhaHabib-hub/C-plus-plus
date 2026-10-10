//C++ already has ready-made exception classes. All come from the base class std::exception, which has a what() function that returns the message.
#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

int main() {
    // out_of_range
    try {
        vector<int> v = {1, 2, 3};
        cout << v.at(10);               // at() checks the range
    }
    catch (out_of_range& e) {
        cout << "Out of range: " << e.what() << endl;
    }

    // invalid_argument
    try {
        throw invalid_argument("Age cannot be negative");
    }
    catch (invalid_argument& e) {
        cout << "Invalid: " << e.what() << endl;
    }

    // bad_alloc (memory fail)
    try {
        int* p = new int[1000000000000];
    }
    catch (bad_alloc& e) {
        cout << "Memory error: " << e.what() << endl;
    }

    // catching through the base class
    try {
        throw runtime_error("Something failed at runtime");
    }
    catch (exception& e) {
        cout << "General: " << e.what() << endl;
    }
    return 0;
}