// Local objects are destroyed during stack unwinding when an exception leaves their scope. RAII helps ensure
// resources are released.

#include <iostream>
using namespace std;
class Guard {
public:
    Guard()  { cout << "Acquire\n"; }
    ~Guard() { cout << "Cleanup\n"; }
};
int main() {
    try {
        Guard g;
        throw 1;
    }
    catch (...) {
        cout << "Handled";
    }
}