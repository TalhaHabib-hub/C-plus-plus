//on the next day prepare for compound assignment operatore overlaoding
#include<iostream>
using namespace std;
class A
{
  int i, j;
  public:
  A()
  {
    i = 0;
    j = 0;
  }
  void input()
  {
    cout<<"Enter the values of i and j: ";
    cin >> i >> j;
  }
  void show()
  {
    cout << "The value of i and j are :" << i << " and " << j << endl;
  }
  A operator * (A p)
  {
    A temp;
    temp.i = i * p.i;
    temp.j = j * p.j;
    return (temp);
  }
};
int main ()
{
  A obj1, obj2, obj3;
  obj1.input();
  obj1.show();
  obj2.input();
  obj2.show();
  obj3 = obj1 * obj2;
  obj3.show();
}