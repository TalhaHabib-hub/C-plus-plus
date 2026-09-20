#include<iostream>
using namespace std;
class B;
class A{
  int a;
  public:
  A(){
    a = 10;
  }
  friend class B;
};
class B{
  int b;
  public:
  B (){
    b = 20;
  }
  void sum(A x,B y){
    cout<<"The Sum of a and b is:"<<x.a+y.b<<endl;
  }
};
int main()
{
   A objA;
   B objB;
   objB.sum(objA,objB);
}