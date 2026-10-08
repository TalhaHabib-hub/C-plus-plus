// Q3. Create a class called time that has separate int member data for hours, minutes, and seconds. One constructor should initialize this data to 0, and another should initialize it to fixed values. Another member function should display it, in 11:59:59 format. The final member function should add two objects of type time passed as arguments. A main() program should create two initialized time objects (should they be const?) and one that isn't initialized. Then it should add the two initialized values together, leaving the result in the third time variable. Finally it should display the value of this third variable. Make appropriate member functions const.

#include <iostream>
using namespace std;

class Time {
    int h, m, s;
public:
    Time() { h = 0; m = 0; s = 0; }
    Time(int hh, int mm, int ss) { h = hh; m = mm; s = ss; }

    void display() const {
        cout << h << ":" << m << ":" << s << endl;
    }

    void add_time(const Time t1, const Time t2) {
        s = t1.s + t2.s;
        m = t1.m + t2.m;
        h = t1.h + t2.h;

        if (s >= 60) { s -= 60; m++; }
        if (m >= 60) { m -= 60; h++; }
    }
};

int main() {
    const Time t1(5, 30, 45);
    const Time t2(3, 45, 35);
    Time t3;

    t3.add_time(t1, t2);
    t3.display();
    t3.h;
    return 0;
}