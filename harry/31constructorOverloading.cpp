// /*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// #include <iostream>
// using namespace std;

// class Complex
// {
//   int a, b;

// public:
//   Complex(){//this one is the default constructor the other two are the parameterized constructor//the object c3 will use it
//      a = 8;
//      b = 8;
//   }
//   Complex(int x, int y)//the object c1 will use it
//   {
//     a = x;
//     b = y;
//   }

//   //now i am wanting that i should pass one value the other should get automatically (mean i don't have to pass any argument for that second variable or any variable)for this purpose i want to make another constructor
//   //the object c2 will use this one
//   Complex(int x){//look dear talha these two constructors are now becoming look like (in the function overloading ) and as these are constructor so we can say that these are constructor oveloading, what the compiler will do is , it will look that how many arguments have passed according to them it will decide which constructor should be run
//     a = x;
//     b = 0;
//   }// dear talha it also shows that there can be multiple constructors in a single class // if you have multiple constructors in a single class with separate sort( alag alag) arguments, that argument set which will match that constructor will run and the code inside those constructor will be execute for the object they relate / for the object whose passed argument matches with the taking / copying arguments of the constructorn. it is almost like the function overloading isn't it

//   void printNumber()
//   {
//     cout << "Your number is " << a << " + " << b << "i" << endl;
//   }
// };

// int main()
// {
//   Complex c1(4, 6);//due to using constructor function these value inside the paranthesis will be assing for this object to the a and b in the class this object is using
//   c1.printNumber();

//   Complex c2(5);
//   c2.printNumber();

//   Complex c3;
//   c3.printNumber();

//   return 0;
// }

// overloading mean using something for multiple tasks // C++ uses polymorphism (something which has different different forms/anything that can acquire many shapes) //like it Talha there is also function overloading in file number 19.understand both together may it be better for you.
// we can make alots of functions with the same name they take their arguments in diferent ways.//based on the arguments the function's argments the compiler decides which one is to be run.

// below one is the above code without comments

#include <iostream>
using namespace std;

class Complex
{
  int a, b;

public:
  Complex()
  {
    a = 8;
    b = 8;
  }
  Complex(int x, int y)
  {
    a = x;
    b = y;
  }

  Complex(int x)
  {
    a = x;
    b = 0;
  }
  void printNumber()
  {
    cout << "Your number is " << a << " + " << b << "i" << endl;
  }
};

int main()
{
  Complex c1(4, 6);
  c1.printNumber();

  Complex c2(5);
  c2.printNumber();

  Complex c3;
  c3.printNumber();

  return 0;
}