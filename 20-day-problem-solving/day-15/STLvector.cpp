// std::vector is a dynamic sequence container. It grows as elements are added.

#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v{10, 20, 30};
    v.push_back(40);
    for (int x : v)
        cout << x << " ";
}