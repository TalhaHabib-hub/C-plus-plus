#include<iostream>
using namespace std;

template<typename x,typename y>
 x sum(x i,y j)
 {
   cout << "The sum is " << i + j << endl;
 }
int main()
{
  sum (2, 4);
  sum (2, 4.4);
  sum (3.2, 4);
  sum (2.4, 4.2);
}
