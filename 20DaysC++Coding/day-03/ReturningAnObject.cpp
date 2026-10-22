#include <iostream>
using namespace std;
class Point {
public:
    int x, y;
};
Point makePoint() {
    return Point{10, 20};
}
int main() {
    Point p = makePoint();
    cout << p.x << ", " << p.y;
}