// Association means two classes know about or interact with each other without strong ownership.

#include <iostream>
using namespace std;
class Teacher {
public:
    void teach() { cout << "Teaching"; }
};
class Student {
public:
    void attend(Teacher& t) {
        t.teach();
    }
};
int main() {
    Teacher t;
    Student s;
    s.attend(t);
}