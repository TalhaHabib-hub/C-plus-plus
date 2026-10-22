// Function templates can implement algorithms over generic arrays.

#include <iostream>
using namespace std;
template <typename T>
T sum(const T arr[], int n) {
    T total{};
    for (int i = 0; i < n; ++i){
        total += arr[i];
        cout << total << endl;
        cout<<f<<endl;
    }
    return total;
}
int main() {
    int a[] = {1,2,3,4};
    cout << sum(a, 4) << endl;
}