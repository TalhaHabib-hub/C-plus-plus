#include <iostream>
using namespace std;
struct fraction
{
  int num;
  int den;
};
fraction getFraction()
{
  fraction f;
  char slash;
  cout << "Enter	fraction	(n/d):	";
  cin >> f.num >> slash >> f.den;
  return f;
}
void showFraction(fraction f)
{
  cout << f.num << "/" << f.den;
}
fraction fadd(fraction f1, fraction f2)
{
  fraction r;
  r.num = f1.num * f2.den + f2.num * f1.den;
  r.den = f1.den * f2.den;
  return r;
}
fraction fsub(fraction f1, fraction f2)
{
  fraction r;
  r.num = f1.num * f2.den - f2.num * f1.den;
  r.den = f1.den * f2.den;
  return r;
}
fraction fmul(fraction f1, fraction f2)
{
  fraction r;
  r.num = f1.num * f2.num;
  r.den = f1.den * f2.den;
  return r;
}
fraction fdiv(fraction f1, fraction f2)
{
  fraction r;
  r.num = f1.num * f2.den;
  r.den = f1.den * f2.num;
  return r;
}
int main()
{
  fraction f1, f2, result;
  cout << "Fraction	1:	";
  f1 = getFraction();
  cout << "Fraction	2:	";
  f2 = getFraction();
  result = fadd(f1, f2);
  cout << "Sum =	";
  showFraction(result);
  cout << endl;
  result = fsub(f1, f2);
  cout << "Difference	=	";
  showFraction(result);
  cout << endl;
  result = fmul(f1, f2);
  cout << "Product = ";
  showFraction(result);
  cout << endl;
  result = fdiv(f1, f2);
  cout << "Quotient =	";
  showFraction(result);
  cout << endl;
  return 0;
}