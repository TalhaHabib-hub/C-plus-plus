// Overloading << lets cout print objects directly. The operator is normally a non-member/friend because cout is on the

#include <iostream>
using namespace std;
class Point {
public:
    int x, y;
    friend ostream& operator<<(ostream& out, const Point& p) {
        return out << "(" << p.x << ", " << p.y << ")";
    }
};
int main() {
    Point p{3, 5};
    cout << p;
}
    