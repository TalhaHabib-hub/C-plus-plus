// The algorithm library supplies reusable algorithms such as sort.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  vector<int> v{5, 1, 4, 2, 3};
  sort(v.begin(), v.end());
  for (int x : v)
    cout << x << " ";
}