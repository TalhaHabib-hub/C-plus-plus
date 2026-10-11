// A practical use of static data is counting how many live objects currently exist.

#include <iostream>
using namespace std;
class Tracker {
    static int live;
public:
    Tracker() { ++live; }
    ~Tracker() { --live; }
    static int getLive() { return live; }
};
int Tracker::live = 0;
int main() {
    Tracker a;
    {
        Tracker b, c;
        cout << Tracker::getLive() << endl;
    }
    cout << Tracker::getLive();
}