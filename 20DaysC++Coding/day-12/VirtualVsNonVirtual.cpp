// A non-virtual base function is selected according to the static type; a virtual function uses the object's dynamic type.

#include <iostream>
using namespace std;
class Base
{
public: 
  void normal() { cout << "Base normal\n"; }
  virtual void virtualFn() { cout << "Base virtual"; }
};
class Derived : public Base
{
public:
  void normal() { cout << "Derived normal\n"; }
  void virtualFn() override { cout << "Derived virtual"; }
};
int main()
{
  Derived d;
  Base *p = &d;
  p->normal();
  p->virtualFn();
}
