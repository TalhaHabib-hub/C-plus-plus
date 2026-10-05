#include<iostream>
using namespace std;

class Employee
{
  int id;
  string name;
  public:
  //  Employee()
  // {
  //   id = 2;
  //   name = "Talha";
  //   cout << "Constructor called for " << name << endl;
  // }
  void display()
  {
    cout << "ID: " << id << ", Name: " << name << endl;
  }
};
int main()
{
  Employee e1;
  Employee e2;
  e1.display();
  e2.display();
  return 0;
}