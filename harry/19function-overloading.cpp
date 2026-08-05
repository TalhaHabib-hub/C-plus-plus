/* A L L A H , M U H A M M A D */
// #include<iostream>
// #include<math.h>
// using namespace std;

// int add(int a, int b){
//   cout<<"using function with 2 arguments "<<endl;
//   return a+b;
// }
// int add(int a, int b, int c){
//   cout<<"using function with 3 arguments "<<endl;
//   return a+b+c;
// }
// //calculate the volume of cylinder
// int volume (double r , int h){
//   return (3.14 * pow(r,2) *h);
// }
// //calculate the volume of rectangular box
// int volume (int l , int b, int h){
//   return (l*b*h);
// }
// //calculate the volume of cube
// int volume (int l ){
//   return pow(l,3);
// }

// //we found that it  worked exactly by looking at the arguments though had the same function name , C++ is intelligent puts the call into to exact function

// int main(){
//   cout<<"The sum of 3 and 6 is "<<add(3,6)<<endl;
//   cout<<"The sum of 3 , 4 and 6 is "<<add(3,4,6)<<endl;

//   cout<<"TheThe volume of cylinder with radius 5 and height 6 is "<<volume(5,6)<<endl;
//   cout<<"TheThe volume of rectangular box with length 15 width 21 and height 6 is "<<volume(5,21,6)<<endl;
//   cout<<"TheThe volume of cube with a side length 5  is "<<volume(5)<<endl;
//   return 0;
// }
// overloading mean using something for multiple tasks // C++ uses polymorphism (something which has different different forms/anything that can acquire many shapes) //like it Talha there is also constructor overloading in file number 31.understand both together may it be better for you.

// this one is the above code without comments
#include <iostream>
#include <math.h>
using namespace std;

int add(int a, int b)
{
  cout << "using function with 2 arguments " << endl;
  return a + b;
}
int add(int a, int b, int c)
{
  cout << "using function with 3 arguments " << endl;
  return a + b + c;
}

int volume(double r, int h)
{
  return (3.14 * pow(r, 2) * h);
}

int volume(int l, int b, int h)
{
  return (l * b * h);
}

int volume(int l)
{
  return pow(l, 3);
}
int main()
{
  cout << "The sum of 3 and 6 is " << add(3, 6) << endl;
  cout << "The sum of 3 , 4 and 6 is " << add(3, 4, 6) << endl;

  cout << "TheThe volume of cylinder with radius 5 and height 6 is " << volume(5, 6) << endl;
  cout << "TheThe volume of rectangular box with length 15 width 21 and height 6 is " << volume(5, 21, 6) << endl;
  cout << "TheThe volume of cube with a side length 5  is " << volume(5) << endl;
  return 0;
}