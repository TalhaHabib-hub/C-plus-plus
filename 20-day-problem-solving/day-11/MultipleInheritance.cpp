// A class may inherit from more than one base class. we use it carefully because name conflicts can occur.

#include <iostream>
using namespace std;
class Camera {
public:
    void click() { cout << "Photo\n"; }
};
class GPS {
public:
    void locate() { cout << "Location"; }
};
class Phone : public Camera, public GPS {};
int main() {
    Phone p;
    p.click();
    p.locate();
}