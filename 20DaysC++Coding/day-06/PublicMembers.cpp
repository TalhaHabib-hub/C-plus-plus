#include<iostream>
using namespace std;
class Student {
public:
    int marks;
};
int main() {
    Student s;
    s.marks = 95;
    cout << s.marks;
}