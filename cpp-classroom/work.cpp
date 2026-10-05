#include <iostream>
using namespace std;

class Box
{
  int value;

public:
  Box(int v = 0)
  {
    value = v;
  }
  Box operator+=(const Box &b)
  {
    this->value += b.value;
    return *this; 
  }

  void display()
  {
    cout << "Value = " << value << endl;
  }
};

int main()
{
  Box a(5), b(3);
  a += b;
  a.display();
  return 0;
}