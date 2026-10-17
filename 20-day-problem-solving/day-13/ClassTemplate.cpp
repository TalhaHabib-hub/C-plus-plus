// A class template creates a family of classes parameterized by type.

#include <iostream>
using namespace std;
template <typename T>
class Box {
    T value;
public:
    Box(T v) : value(v) {}
    T get() const { return value; }
};
int main() {
    Box<int> a(10);
    Box<string> b("Hello");
    cout << a.get() << " " << b.get();
}