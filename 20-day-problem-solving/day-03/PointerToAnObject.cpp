#include <iostream>
using namespace std;
class Test {
public:
    int x = 10;
    void show() { cout << x; }
};
int main() {
    Test t;
    Test* p = &t;
    cout << p->x << endl;
    p->show();
}