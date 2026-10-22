// Deserialize by reading the fields in exactly the format used during serialization.

#include <iostream>
#include <fstream>
using namespace std;
class Student {
public:
    string name;
    int marks;
};
int main() {
    Student s;
    ifstream in("student.txt");
    getline(in, s.name);
    in >> s.marks;
    cout << s.name << " " << s.marks;
}