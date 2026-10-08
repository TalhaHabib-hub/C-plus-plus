#include <iostream>
using namespace std;
class Student {
private:
    int marks = 0;
public:
    void set(int m) { marks = m; }
    int get() const { return marks; }
};
int main() {
    Student s;
    s.set(91);
    cout << s.get();
}