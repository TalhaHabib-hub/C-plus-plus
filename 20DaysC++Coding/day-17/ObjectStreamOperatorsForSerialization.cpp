// Overloading << and >> can make object serialization feel like ordinary stream I/O.

#include <iostream>
#include <sstream>
using namespace std;
class Student {
public:
    string name;
    int marks;
    friend ostream& operator<<(ostream& out, const Student& s) {
        return out << s.name << ' ' << s.marks;
    }
    friend istream& operator>>(istream& in, Student& s) {
        return in >> s.name >> s.marks;
    }
};
int main() {
    Student a{"Ali", 85};
    stringstream ss;
    ss << a;
    Student b;
    ss >> b;
    cout << b;
}