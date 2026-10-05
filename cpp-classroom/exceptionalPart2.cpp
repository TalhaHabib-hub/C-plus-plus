#include<iostream>
using namespace std;
int main ()
{
  int a, b, c;
  cout << "Enter the values of a and b : ";
  cin >> a >> b;
  try
  {
    if(b!=0)
    {   
       c = a / b;
       cout << "The result is " << c << endl;
    }
    else
    {
      throw b;
    }
  }

  catch (int i)
    {
      cout << "divided by " << i << endl;
    }
  }

