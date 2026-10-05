#include<iostream>
using namespace std;
class B;
class A
{
  int a,b;
  public:
    A()
    {
      a=3;
      b=6;
    }
    friend class B;
};
class B
{
public:
  void display(A i)
  {
    cout<<"The value for a of an object of class A is "<<i.a<<" and b is "<<i.b<<endl;
  }
};
int main()
{
  A objA;
  B objB;
  objB.display(objA);
}