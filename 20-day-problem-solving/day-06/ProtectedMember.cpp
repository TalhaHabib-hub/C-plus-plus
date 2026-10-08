#include<iostream>
using namespace std;
class Parent {
protected:
    int value = 10;
};
class Child : public Parent {
public:
    void show() { cout << value; }
};
int main() {
    Child c;
    c.show();
}