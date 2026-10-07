#include <iostream>
using namespace std;
class Point {
    int x, y;
public:
    Point() : x(0), y(0) {}
    Point(int a, int b) : x(a), y(b) {}
    void show() const { cout << x << "," << y; }
};
int main() {
    Point a;
    Point b(3, 4);
    a.show();
    cout << endl;
    b.show();
}