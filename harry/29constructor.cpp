// Constructor and destructor are very important parts of classes and object oriented programming
/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// if your are wanting that you made a object and exactly at that time if you want to initailize , we will do it like automatically( also mainly explained it in the line 47 of 28b)
// classes are costom data types
//  #include<iostream>
//  using namespace std;

// class Complex{
//   int a , b;
//   public:
//       // Creating a constructor
//       // Constructor is a special member function with same name as of the class
//       // it is used to initialize the objects of its class
//       // constructor declaration --> it is just a special function which has exactly the same name as the class . and when we make an object it runs automatically (it is automatically invoked<-- use this words);
//       Complex();// declared here , defined later at line 21/ if the name of this function is not like the class it will not be invoke automatically
//       //talha if you made a constructor its returned type is not imporatant , it doesn't has a return type. and if you are making any other function there we will have need of return type,  sir said this i think look at the declaration there is not any type written not even void.so it is also a clear difference that we will not write void or int or something.
//       void printdata(){
//         cout<<"\nThe a is : "<<a<<" and The b is : "<<b<<endl;
//       }
// };

// Complex ::Complex(void){// look dear talha we ran it without even calling it , how it happend , it happend because the name of this function was like the name of the class this is what we called it constructor // sir said that the values were directly assigned at the time of constructind an object by it , so called as constructor // and that is why we had said that it was automatically invoked
//     a = 10;   //
//     b = 67;
//     cout <<"hello world!\t";
// }// in simple words this happend here Talha --> if you make an object of a class , and if the class has constructor function -> that function will perform its function/(execute the block of code in itself) for the object just made , and don't waits for being invoked ( here it,s work is to set the values of the varible in the class for the objects) , and it make the value equal to the variable for every object we made , // the synatx here is simple make a function with exactly the same name of the class write code inside that function it will run for all the object you made from this class
// int main(){
//   Complex c1, c2, c3;
//   c1.printdata();
//   c2.printdata();
//   c3.printdata();

//   return 0;
// }
// talha the constructor that donnot accepts any parameters is called default constructor .( the above one was a default constructor)

/*
    Propertise of Constructor

1. It should be declared in the public section of the class
2. They are automatically invoked whenever the object is created(look for hello world)
3. They cannot return values and don't have return types
4. It can have default arguments (like at line 22 we can write like int a=6 etc)
5. We cannot refer to the address// it is not that complex
*/

// //this is my on try lets have it
// /*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// #include<iostream>
// using namespace std;

// class KHAN{
//   int a , b;
//   public:
//     void printValue()  {
//       cout<<"The value of a is : "<<a <<"\nand that of b is :"<<b<<endl;
//     };
//     //buddy this is our constructor
//     KHAN(){// we use this to do thing  automatically with the object we made from the class in which it is present
//       a = 2;
//       b = 1;
//     }
// };
// int main(){
//   KHAN one, two;
//   one.printValue();//for object one the values of a and b will be 2 and 4 respectively.
//   two.printValue();//for object one the values of a and b will be 2 and 4 respectively.

//   return 0;
// }

// this is my on try without comments lets have it
/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include <iostream>
using namespace std;

class KHAN
{
  int a, b;

public:
  void printValue()
  {
    cout << "The value of a is : " << a << "\nand that of b is :" << b << endl;
  };

  KHAN()
  {
    a = 2;
    b = 1;
  }
  KHAN(int a, int b)
  {
   this-> a = a;
   this-> b = b;
  }
};
int main()
{
  KHAN one;
  KHAN b(5,3);
  one.printValue();
  b.printValue();

  return 0;
}
