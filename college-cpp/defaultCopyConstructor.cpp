#include <iostream>
using namespace std;

class CopyConstructor {
private:
    int a;
    int* b;

public:
    // CopyConstructor(int x, int y) : a(x), b(new int(y)) {}
    CopyConstructor(int x, int y):a(x), b(new int(;y) {})

    // Copy the value pointed to by other.b into a new allocation.
    // This makes the two objects independent (a deep copy).
    CopyConstructor(const CopyConstructor& other)
        : a(other.a), b(new int(*other.b)) {}// b = new int(*other.b);

    ~CopyConstructor() {
        delete b;
    }

    int getSum() const {
        return a + *b;
    }

    int getB() const {
        return *b;
    }

    void setB(int value) {
        *b = value;
    }
};

int main() {
    CopyConstructor original(5, 10);

    // Calls CopyConstructor(const CopyConstructor& other).
    CopyConstructor copied = original;

    cout << "Before changing the copy:" << endl;
    cout << "Original b: " << original.getB() << endl;
    cout << "Copied b:   " << copied.getB() << endl;

    // Change the value owned by copied. original stays unchanged because
    // the copy constructor gave copied its own int.
    copied.setB(20);

    cout << "\nAfter changing copied.b to 20:" << endl;
    cout << "Original sum: " << original.getSum() << endl;
    cout << "Copied sum:   " << copied.getSum() << endl;

    return 0;
}
