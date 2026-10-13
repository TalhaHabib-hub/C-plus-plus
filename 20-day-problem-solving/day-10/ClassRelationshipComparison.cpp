// Useing this program to remember the basic difference: composition owns a part, aggregation refers to an externally
// existing part, and association describes interaction.

#include <iostream>
using namespace std;
class Battery {};
class Phone {
    Battery battery;       // composition
};
class Student {};
class Course {
    Student* student;      // aggregation-like reference
public:
    Course(Student* s) : student(s) {}
};
int main() {
    Student s;
    Course c(&s);
}