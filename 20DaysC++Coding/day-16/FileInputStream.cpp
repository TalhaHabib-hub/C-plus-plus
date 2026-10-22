// ifstream reads formatted data from a file.

#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream in("marks.txt");
    string name;
    int marks;
    while (in >> name >> marks)
        cout << name << " " << marks << endl;
}