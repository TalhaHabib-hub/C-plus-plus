// Sometimes one type needs special behavior. Full specialization provides a custom implementation for that type.

#include <iostream>
using namespace std;
template <typename T>
struct Printer {
    static void print(T x) { cout << x; }
};
template <>
struct Printer<bool> {
    static void print(bool x) { cout << (x ? "TRUE" : "FALSE"); }
};
template <>
struct Printer<float> {
  static void print(float x) { cout << x; }
};
int main() {
    Printer<int>::print(5);
    cout << " ";
    Printer<bool>::print(true);
    cout << " ";
    Printer<float>::print(3.14f);
}
