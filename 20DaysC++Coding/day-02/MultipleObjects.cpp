#include <iostream>
using namespace std;
class Student {
public:
    string name;
    int marks;
};
int main() {
    Student a{"Ali", 80};
    Student b{"Sara", 92};
    cout << a.name << " " << a.marks << endl;
    cout << b.name << " " << b.marks;
}