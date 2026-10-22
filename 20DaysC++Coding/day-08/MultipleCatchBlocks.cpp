#include <iostream>
using namespace std;

void test(int x) {
    try {
        if (x == 1) throw 10;            // int
        if (x == 2) throw 3.14;          // double
        if (x == 3) throw 'A';           // char
        if (x == 4) throw "text error";  // const char*
        cout << "No error" << endl;
    }
    catch (int e)         { cout << "Caught int: " << e << endl; }
    catch (double e)      { cout << "Caught double: " << e << endl; }
    catch (char e)        { cout << "Caught char: " << e << endl; }
    catch (const char* e) { cout << "Caught string: " << e << endl; }
}

int main() {
    for (int i = 0; i <= 4; i++) test(i);
    return 0;
}