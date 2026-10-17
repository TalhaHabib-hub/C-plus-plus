// A function template lets the same algorithm work 

#include <iostream>
using namespace std;
template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}
int main() {
    cout << maximum(4, 7) << endl;
    cout << maximum(2.5, 1.5);
}