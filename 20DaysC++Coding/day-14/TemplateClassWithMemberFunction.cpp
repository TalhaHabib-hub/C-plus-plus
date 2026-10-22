// Separate the idea of a generic type from its member operations. This pattern is common in library code.

#include <iostream>
using namespace std;
template <class T>
class PairBox {
    T first, second;
public:
    PairBox(T a, T b) : first(a), second(b) {}
    T larger() const {
        return first > second ? first : second;
    }
};
int main() {
    PairBox<double> p(4.2, 7.1);
    cout << p.larger();
}
