#include<iostream>
using namespace std;
void sum(int i, int j);
void sum(int i, double j);
void sum(double i, int j);
void sum(double i, double j);
int main ()
{
  sum(2, 4);
  sum(2, 4.4);
  sum(3.2, 4);
  sum(2.4, 4.2);
}
void sum(int i,int j)
{
  cout << "The sum is " << i + j << endl;
}
void sum(int i,double j)
{
  cout << "The sum is " << i + j << endl;
}
void sum(double i,int j)
{
  cout << "The sum is " << i + j << endl;
}
void sum(double i,double j)
{
  cout << "The sum is " << i + j << endl;
}