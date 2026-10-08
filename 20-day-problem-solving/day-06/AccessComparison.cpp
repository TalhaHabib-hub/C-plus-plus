#include <iostream>
using namespace std;
class Demo {
public:
    int a = 1;
protected:
    int b = 2;
private:
    int c = 3;
public:
    void showAll() {
        cout << a << " " << b << " " << c;
    }
};
int main() {
    Demo d;
    cout << d.a << endl;
    d.showAll();
}