// Equality for objects can be defined by comparing their meaningful data.

#include <iostream>
using namespace std;
class Student {
    int id;
public:
    Student(int i) : id(i) {}
    bool operator==(const Student& s) const {
        return id == s.id;
    }
};
int main() {
    Student a(10), b(10);
    cout << (a == b);
}