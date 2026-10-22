// A class template can represent a reusable stack for int, double, string, or other types.

#include <iostream>
#include <vector>
using namespace std;
template <typename T>
class Stack
{
  vector<T> data;
//have to look at the vector class to understand how it works. It is a dynamic array that can grow and shrink in size. It has a push_back() method that adds an element to the end of the vector, and a pop_back() method that removes the last element from the vector. It also has a back() method that returns a reference to the last element in the vector.
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