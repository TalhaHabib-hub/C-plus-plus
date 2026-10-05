#include <iostream>
using namespace std;
class B;
class A
{
  int a;

public:
  A()
  {
    a = 6;
  }
  friend class B;
};
class B
{
public:
  void show(A i)
  {
    cout << "The Value of b is:" << i.a << endl;
  }
};
int main()
{
  A obj1;
  B obj2;
  obj2.show(obj1);
}