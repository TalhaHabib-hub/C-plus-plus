#include<iostream>
using namespace std;
class A
{
  protected:
    int a;
};
class B:virtual public A{
  public:
  int basharat = 20;
  protected:
   int b;
};
class C:virtual public A{
  protected:
   int c;
};
class D: public B, public C
{
  public:
    void input()
    {
      a = 1;
      b = 2;
      c = 3;
    }
    void show()
    {
      cout<<"value of a b c are : "<<a<<endl<<b<<endl<<c;
    }
};
int main ()
{
  D objD;
  objD.input();
  objD.show();
  B objB;
  cout<<objB.basharat<<endl;
}