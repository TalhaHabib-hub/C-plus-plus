#include <iostream>
using namespace std;
class Box {
public:
    int value;
};
void printBox(const Box& b) {
    cout << b.value;
}
int main() {
    Box b{50};
    printBox(b);
}