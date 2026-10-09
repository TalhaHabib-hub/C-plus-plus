#include<iostream>
using namespace std;
class Student {
public:
    static int count;
    Student() { ++count; }
};
int Student::count = 0;
int main() {
    Student a, b, c;
    cout << Student::count;
}