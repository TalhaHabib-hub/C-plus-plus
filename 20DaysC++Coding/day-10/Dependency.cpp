// Dependency means one class temporarily uses another, often through a function parameter.

#include <iostream>
using namespace std;
class Printer {
public:
    void print() { cout << "Printed"; }
};
class Report {
public:
    void sendTo(Printer& p) {
        p.print();
    }
};
int main() {
    Printer p;
    Report r;
    r.sendTo(p);
}
