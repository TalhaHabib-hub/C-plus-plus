// 519.  If a Child class has been derived from two base classes having member functions with the same name but derived has no such function. Member function of which base class will be invoked with the reference of an object of the derived class.


#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "This is Class A" << endl;
    }
};

class B
{
public:
    void show()
    {
        cout << "This is Class B" << endl;
    }
};

class C : public A, public B
{
  public:
  void show()
    {
        cout << "This is Class C" << endl;
    }
};

int main()
{
    C obj;
    C *ptr=&obj;

    ptr->show();
    ptr->A::show();
    ptr->B::show();

    return 0;
}