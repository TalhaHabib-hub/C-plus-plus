#include<iostream>
using namespace std;
int main() {


try {
    throw 99.5f;
}
catch (int e) {
    cout << "int" << endl;
}
catch (...) {
    cout << "Some unknown exception caught" << endl;
}
}