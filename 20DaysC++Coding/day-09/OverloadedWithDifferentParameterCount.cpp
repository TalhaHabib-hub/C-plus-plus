// The same function name can have different numbers of parameters.

#include <iostream>
using namespace std;
int area(int s) { return s * s; }
int area(int l, int w) { return l * w; }
int main() {
    cout << area(5) << endl;
    cout << area(5, 3);
}
