// A class template can represent a reusable stack for int, double, string, or other types.

#include <iostream>
#include <vector>
using namespace std;
template <typename T>
class Stack
{
  vector<T> data;

public:
  void push(const T &x) { data.push_back(x); }
  T pop()
  {
    T x = data.back();
    data.pop_back();
    return x;
  }
};
int main()
{
  Stack<int> s;
  s.push(10);
  s.push(20);
  cout << s.pop();
}