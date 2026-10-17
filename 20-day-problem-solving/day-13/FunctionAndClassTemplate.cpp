// A generic swap function can exchange values of many types without rewriting the algorithm.

#include <iostream>
using namespace std;
template <typename T>
void mySwap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}
int main() {
    int a = 3, b = 8;
    mySwap(a, b);
    cout << a << " " << b;
}