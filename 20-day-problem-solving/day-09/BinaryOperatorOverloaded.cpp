// A binary operator works on two operands. Overloading + can define how two objects combine.

#include <iostream>
using namespace std;
class Point {
public:
    int x, y;
    Point(int a=0, int b=0) : x(a), y(b) {}
    Point operator+(const Point& p) const {
        return Point(x + p.x, y + p.y);
    }
};
int main() {
    Point a(1, 2), b(3, 4);
    Point c = a + b;
    cout << c.x << "," << c.y;
}