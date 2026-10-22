// Protected members can be used by derived classes but remain hidden from ordinary outside access.

#include <iostream>
using namespace std;
class Person {
protected:
    string name = "Ali";
};
class Student : public Person {
public:
    void show() { cout << name; }
};
int main() {
    Student s;
    s.show();
}