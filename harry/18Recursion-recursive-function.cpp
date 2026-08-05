/* A L L A H , M U H A M M A D */
// #include<iostream>
// using namespace std;

// // Recursions : A functions calls to itself again and again untill the base conditions don't meets
//     // Factorial of a number
//     // 6! = 6*5*4*3*2*1 = 720
//     // 0! = 1 by definition
//     // 1! = 1 by definition
//     // n! = n * (n - 1)! -> 6 * (5)!

// int factorial(int n){
//   if (n<=1){ // or n == 0 || n == 1
//     return 1;
//   }
//   return n * factorial(n-1);
// }
// // step by step foactorial taking ogf 4
// // This is how it works( Talha below for the first three the if statment will be falso so will not be executed)
// // factorial(4) = 4 * factorial(4 - 1) //it still will not return because "factorial(4 - 1)" is not an integer and function must has to return an integer so it will open ( for it recall the function and here it will calll to itself and calling to self is called recursion which was the purpose of all over discussion)
// // factorial(3) = 4 * 3 * factorial(3 - 1)
// // factorial(2) = 4 * 3 * 2 * factorial(2 - 1)// for it now the condition will be true and return 1
// // factorial(3) = 4 * 3 * 2 * 1
// // finally 25 will be return
// //--------------------------

// //another example of recursion
// //fibonache sereis like (1,1,2,3,5,8,13) lets say we have to find the nth term
// int fibonache(int n){
//   if (n < 2){
//     return 1;
//   }
//   return fibonache(n-2) + fibonache(n-1);
// }
// int main(){                                                                                                                                                                                                          int  a ;
//   cout<< "Inter a number "<<endl;
//   cin >> a ;
//   cout<<"The Factorial of "<< a << " is "<< factorial(a);
// //-------------------------------------------------------
//   cout<<"\nThe term in fibonache sequence at position  "<< a <<" is " <<fibonache(a);
//   return 0;
// }
// this one is the code without commments
#include <iostream>
using namespace std;

int factorial(int n)
{
  if (n <= 1)
  {
    return 1;
  }
  return n * factorial(n - 1);
}

int fibonache(int n)
{
  if (n < 2)
  {
    return 1;
  }
  return fibonache(n - 2) + fibonache(n - 1);
}
int main()
{
  int a;
  cout << "Inter a number " << endl;
  cin >> a;
  cout << "The Factorial of " << a << " is " << factorial(a);

  cout << "\nThe term in fibonache sequence at position  " << a << " is " << fibonache(a);
  return 0;
}