// std::map stores key-value pairs ordered by key.

#include <iostream>
#include <map>
using namespace std;
int main() {
    map<string, int> marks;
    marks["Ali"] = 85;
    marks["Sara"] = 92;
    marks["Nafees"] = 98;
    marks["Talha"] = 92;
    for (const auto& entry : marks)
        cout << entry.first << ": " << entry.second << endl;
}