#include<iostream>
using namespace std;

class A
{
  int i;
  public:
  A(int x)
  {
    i = x;
  }
  A (const A &obj)
  {
    i = obj.i;
  }
  void print()
  {
    cout << "Value of i: " << i << endl;
  }
};
int main()
{
  A a1(20);
  // A a2 = a1;
  A a2(a1); 
  a1.print();
  a2.print();
  return 0;
}