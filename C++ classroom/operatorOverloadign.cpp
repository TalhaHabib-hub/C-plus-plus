#include<iostream>
using namespace std;
class A 
{
  //high Talha HOw are you
  int a;
  public:
     A ()
     {
       a = 0;
     }
    
     void printData()
     {
       cout << "The value of a is: " << a << endl;
     }
     A operator ++ ()
     {
       A tempObj;
       a++;
       tempObj.a = a;
       return tempObj;
     }
};
int main ()
{
  A obj,obj2;
  obj.printData();
  obj2.printData();
  obj2 = ++obj;
  obj.printData();
  obj2.printData();
}