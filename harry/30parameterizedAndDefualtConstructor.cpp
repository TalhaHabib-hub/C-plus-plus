// destructor we will discuss it later , what it actually does is it destruct the object and makes the memory free or we can say delete , but our focus here is just constructor.
/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// #include<iostream>
// using namespace std;

// class Complex{
//   int a , b;
//      public:
//           Complex(void);//write void or not any problem
//           void printNumber(){
//              cout<< "Your number is "<<a<<" + "<<b<<"i"<<endl;
//           }
// };
// Complex::Complex(){   // ya apna kam khud karaga apko pata bhi nahi chala ga.
//   a = 0;
//   b = 0;
// }

// int main(){
//     Complex a;
//     a.printNumber();
//   return 0;
// } // it was just simple one below one is parameterized Construction is used

// in the paramterized constructor , the constructor function takes some parameter and performs its tasks .
// #include<iostream>
// using namespace std;

// class Complex{
//   int a , b;
//      public:
//           Complex(int x, int y);//write void or not any problem
//           void printNumber(){
//              cout<< "Your number is "<<a<<" + "<<b<<"i"<<endl;
//           }
// };
// Complex::Complex(int x, int y){  //--> it is a parameterized constructor// it takes 2 parameters
//   a = x;
//   b = y;
// }

// int main(){
//   // Implicit call;
//     // Complex a(8,9);
//     Complex b(75,3);
//   // Explicit call;
//     Complex a = Complex(5,153)  ;//--> its implicit would be " Complex a(5,153)"
//     b.printNumber();

//     a.printNumber();
//   return 0;
// }
// we will see another example of parameterized constructor. which is in the file 30b.

// this is the above code without comments
#include <iostream>
using namespace std;

class Complex
{
  int a, b;

public:
  Complex(int x, int y);
  void printNumber()
  {
    cout << "Your number is " << a << " + " << b << "i" << endl;
  }
};
Complex::Complex(int x, int y)
{
  a = x;
  b = y;
}

int main()
{

  Complex b(75, 3);
  Complex a = Complex(5, 153);
  b.printNumber();

  a.printNumber();
  return 0;
}