#include<iostream>
using namespace std;
class RelationalOp
{
  int a;
  public:
  RelationalOp()
  {
    a = 0;
  }
  void Input(){
    cout << "Enter the value for obj: ";
    cin >> a;
  }
  void Print()
  {
    cout << "The value for the obj is : " << a << endl;
  }
  int operator!=(RelationalOp i)
  {
    if (a != i.a)
      return true;
    else
      return false;
  }
};
int main ()
{
  RelationalOp obj1, obj2;
  obj1.Input();
  obj1.Print();
  obj2.Input();
  obj2.Print();

  if (obj1 != obj2)// if you write 0 inside the paranthesis the else portion will be executed
    cout << "Data member for obj1 is not equal to obj2" << endl;
  else
    cout << "The private data members of these objects are  equal";

  // this below statment is showing that we can assign boolean value to an integer it will be stored as 1 or 0
  int k = true;
  cout << k;
}