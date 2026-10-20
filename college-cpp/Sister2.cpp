#include <iostream>
using namespace std;

template <class T>
T add(T a, T b)
{
  return a + b;
}
int main()
{
  cout << "The sum of 2 and 4 is :" << add<int>(2, 4) << endl;
  cout << "The sum of 3.4 and 5.4 is :" << add<float>(3.4, 5.4) << endl;
}