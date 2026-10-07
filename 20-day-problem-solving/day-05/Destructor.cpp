#include <iostream>
using namespace std;
class Demo {
public:
    Demo()  { cout << "Created\n"; }
    ~Demo() { cout << "Destroyed\n"; }
};
int main() {
    Demo d;
}