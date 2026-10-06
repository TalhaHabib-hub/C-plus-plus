#include <iostream>
using namespace std;
class Student {
    int marks;
public:
    Student() : marks(0) {}
    void show() { cout << marks; }
};
int main() {
    Student s;
    s.show();
}