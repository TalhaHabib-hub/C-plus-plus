#include <iostream>
using namespace std;
class Student {
    int marks;
public:
    void setMarks(int marks) {
        this->marks = marks;
    }
    void show() { cout << marks; }
};
int main() {
    Student s;
    s.setMarks(88);
    s.show();
}