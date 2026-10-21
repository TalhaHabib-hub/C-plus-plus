// A loop can store many records in a single text file.

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
class Student {
public:
    string name;
    int marks;
};
int main() {
    vector<Student> students = {
        {"Ali", 80}, {"Sara", 91}, {"Hamza", 77}
    };
    ofstream out("students.txt");
    for (const auto& s : students)
        out << s.name << " " << s.marks << '\n';
}