// A template can have multiple type parameters when inputs have different types.

#include <iostream>
using namespace std;
template <typename A, typename B>
void show(A a, B b) {
    cout << a << " " << b;
}
int main() {
    show(10, 2.5);
}