#include <iostream>
using namespace std;
class Box {
    int value = 42;
    friend void show(const Box&);
};
void show(const Box& b) {
    cout << b.value;
}
int main() {
    Box b;
    show(b);
}