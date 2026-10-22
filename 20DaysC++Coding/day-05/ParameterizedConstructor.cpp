#include <iostream>
using namespace std;
class Rectangle {
    int l, w;
public:
    Rectangle(int length, int width) : l(length), w(width) {}
    int area() const { return l * w; }
};
int main() {
    Rectangle r(5, 3);
    cout << r.area();
}