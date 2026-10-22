// Multiple functions can share a name if their parameter lists differ. This is compile-time polymorphism.

#include <iostream>
using namespace std;
int add(int a, int b) { return a + b; }
double add(double a, double b) { return a + b; }
int main() {
    cout << add(2, 3) << endl;
    cout << add(2.5, 3.5);
}