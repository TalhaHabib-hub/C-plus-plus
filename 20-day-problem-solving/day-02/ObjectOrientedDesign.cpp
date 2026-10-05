#include <iostream>
using namespace std;
struct Student {
    string name;
    int marks;
    void show() {
        cout << name << " : " << marks;
    }
};
int main() {
    Student s{"Ali", 85};
    s.show();
}