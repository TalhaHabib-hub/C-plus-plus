#include <iostream>
using namespace std;

class shape
{
public:
  virtual double area() const = 0;
};

class circle : public shape
{
  double radius;

public:
  circle(double r)
  {
    radius = r;
  }
  double area() const override
  {
    return 3.14159 * radius * radius;
  }
};

class traingle : public shape
{
  double base, height;

public:
  traingle(double b, double h)
  {
    base = b;
    height = h;
  }
  double area() const override
  {
    return 0.5 * base * height;
  }
};

int main()
{
  circle c(5);
  traingle t(4, 6);
  cout << "Area of circle=" << c.area() << endl;
  cout << "Area of traingle=" << t.area() << endl;
  return 0;
}