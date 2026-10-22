#include <iostream>
using namespace std;
class Rectangle {
public:
    int length, width;
    int area() {
        return length * width;
    }
};
int main() {
    Rectangle r{5, 4};
    cout << r.area();
}