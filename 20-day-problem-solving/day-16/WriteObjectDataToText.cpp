// Text serialization means converting object state into a storable textual representation.

#include <iostream>
#include <fstream>
using namespace std;
class Student {
public:
    string name;
    int marks;
};
int main() {
    Student s{"Ali", 88};
    ofstream out("student.txt");
    out << s.name << '\n' << s.marks << '\n';
}