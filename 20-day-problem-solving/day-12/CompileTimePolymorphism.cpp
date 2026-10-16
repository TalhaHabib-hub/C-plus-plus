// Function and operator overloading are examples of compile-time polymorphism because the compiler chooses the
// operation.

#include <iostream>
using namespace std;
void print(int x) { cout << "int: " << x; }
void print(double x) { cout << "double: " << x; }
int main()
{
  print(5);
  cout << endl;
  print(5.5);
}