//  ownership/lifetime as the main question. If the part should normally die with the whole, composition is a natural
// model; if it exists independently, aggregation is often appropriate.

#include <iostream>
using namespace std;
class Heart {};
class Human {
    Heart heart; // strong ownership
};
class Teacher {
public:
    string name;
    Teacher(string n) : name(n) {}
};
class School {
    Teacher* teacher; // external object
public:
    School(Teacher* t) : teacher(t) {}
};
int main() {
    Teacher t("Ali");
    School s(&t);
}