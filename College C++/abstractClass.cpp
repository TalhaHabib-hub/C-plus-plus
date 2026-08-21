#include <iostream>
using namespace std;

class A
{
protected:
  int a, b;

public:
  virtual void calculate() = 0;
  void input(int i, int j)
  {
    a = i;
    b = j;
  }
};
class B : public A
{
public:
  void calculate()
  {
    cout << "sum is " << a + b << endl;
  }
};
class C : public A
{
public:
  void calculate()
  {
    cout << "difference is " << a - b << endl;
  }
};
int main()
{
  A *ptrBase;
  B objB;
  
  ptrBase = &objB;
  ptrBase->input(3, 4);
  ptrBase->calculate();

  ptrBase = new C;
  ptrBase->input(5, 7);
  ptrBase->calculate();
}