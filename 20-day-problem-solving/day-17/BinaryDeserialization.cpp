// Read binary bytes back into a compatible object layout.

#include <iostream>
#include <fstream>
using namespace std;
struct Record {
    int id;
    double marks;
};
int main() {
    Record r{};
    ifstream in("record.bin", ios::binary);
    in.read(reinterpret_cast<char*>(&r), sizeof(r));
    cout << r.id << " " << r.marks;
}