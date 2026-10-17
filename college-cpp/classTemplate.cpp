#include <iostream>
using namespace std;

template <class T>
class Box {
private:
    T value;

public:
    Box(T v) : value(v) {}

    void setValue(T v) {
        value = v;
    }

    T getValue() const {
        return value;
    }

    T add(T x) const {
        return value + x;
    }
};

int main() {
    Box<int> intBox(10);
    Box<double> doubleBox(12.5);

    cout << "Integer Box value: " << intBox.getValue() << endl;
    cout << "Integer Box + 5: " << intBox.add(5) << endl;

    cout << "Double Box value: " << doubleBox.getValue() << endl;
    cout << "Double Box + 2.25: " << doubleBox.add(2.25) << endl;

    intBox.setValue(25);
    cout << "Updated Integer Box value: " << intBox.getValue() << endl;

    return 0;
}
