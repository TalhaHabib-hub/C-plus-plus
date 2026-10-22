// Aggregation is a weaker whole-part relationship where the contained object can exist independently of the container.

#include <iostream>
using namespace std;
class Teacher {
public:
    string name;
    Teacher(string n) : name(n) {}
};
class Department {
    Teacher* teacher;
public:
    Department(Teacher* t) : teacher(t) {}
    void show() { cout << teacher->name; }
};
int main() {
    Teacher t("Dr. Ali");
    Department d(&t);
    d.show();
}
