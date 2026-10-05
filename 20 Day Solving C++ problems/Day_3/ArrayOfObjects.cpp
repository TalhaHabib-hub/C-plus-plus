#include <iostream>
using namespace std;
class Student {
public:
    string name;
    int marks;
};
int main() {
    Student s[3] = {
        {"Ali", 80},
        {"Sara", 90},
        {"Hamza", 75}
    };
    for (const auto& x : s)
        cout << x.name << " " << x.marks << endl;
}
