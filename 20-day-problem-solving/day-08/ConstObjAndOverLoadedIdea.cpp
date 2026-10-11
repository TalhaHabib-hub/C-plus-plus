//
#include <iostream>
using namespace std;
class Demo {
public:
    void show()       { cout << "non-const"; }
    void show() const { cout << "const"; }
};
int main() {
    Demo a;
    const Demo b;
    a.show();
    cout << endl;
    b.show();
}
