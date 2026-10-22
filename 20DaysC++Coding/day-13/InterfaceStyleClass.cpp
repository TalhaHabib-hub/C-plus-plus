// C++ has no separate interface keyword. A class containing only pure virtual operations can act as an interface.

#include <iostream>
using namespace std;
class Printable {
public:
    virtual void print() const = 0;
    virtual ~Printable() = default;
};
class Report : public Printable {
public:
    void print() const override { cout << "Report"; }
};
int main() {
    Report r;
    r.print();
}
