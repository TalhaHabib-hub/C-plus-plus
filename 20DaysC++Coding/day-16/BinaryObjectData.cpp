// Binary files store bytes rather than human-readable text. For simple fixed-layout examples, write/read can use binary
// streams, but raw object serialization has limitations for pointers, strings, and non-trivial classes.

#include <iostream>
#include <fstream>
using namespace std;
struct Record {
    int id;
    double marks;
};
int main() {
    Record r{10, 91.5};
    ofstream out("record.bin", ios::binary);
    out.write(reinterpret_cast<const char*>(&r), sizeof(r));
}