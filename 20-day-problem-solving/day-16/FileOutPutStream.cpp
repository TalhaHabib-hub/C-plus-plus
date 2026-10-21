// ofstream writes text to a file. Always check whether the file opened successfully.

#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream out("marks.txt");
    if (!out) {
        cout << "Could not open file";
        return 1;
    }
    out << "Ali 85\n";
    out << "Sara 92\n";
}