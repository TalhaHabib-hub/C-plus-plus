#include <iostream>
using namespace std;
class Student {
    int marks = 0;
public:
    bool setMarks(int m) {
        if (m < 0 || m > 100) return false;
        marks = m;
        return true;
    }
    int getMarks() const { return marks; }
};
int main() {
    Student s;
    cout << s.setMarks(110) << endl;
    cout << s.setMarks(85) << endl;
    cout << s.getMarks();
}