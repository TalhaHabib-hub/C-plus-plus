#include <iostream>
using namespace std;
class Number
{
  int x;
public:
  Number(int n) : x(n) {}
  Number(const Number &other) : x(other.x) {}
  void show() const { cout << x; }
};
int main()
{
  Number a(50);
  Number b = a;
  b.show();
}