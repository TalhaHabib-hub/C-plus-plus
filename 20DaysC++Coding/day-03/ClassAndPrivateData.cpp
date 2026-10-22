#include <iostream>
using namespace std;
class Student {
private:
    int marks;
public:
    void setMarks(int m) { marks = m; }
    int getMarks() const { return marks; }
};
int main() {
    Student s;
    s.setMarks(90);
    cout << s.getMarks();
}