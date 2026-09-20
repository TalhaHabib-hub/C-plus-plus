#include <iostream>
using namespace std;
class A
{
  int *ptr;
  int size;

public:
  A(int i)
  {
    size = i;
    ptr = new int[size];
    cout << "Array of size " << size << " created" << endl;
  }
  ~A()
  {
    delete[] ptr;
    cout << "Array of size " << size << " is deleted" << endl;
  }
};
int main()
{
  A obj1(4);
  A obj2(6);
}