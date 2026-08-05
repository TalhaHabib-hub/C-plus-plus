// /*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// // compiler is like a police it is not going to allow other functions (functions outside the class) to access private members of the class. // if still you are wanting to get access to the private members for functions make the function a friend of the class
// #include <iostream>
// using namespace std;
// // 1 + 4i
// // 5 + 8i
// //-------
// // 6 + 12i
// class complex
// {
//   int a, b;

// public:
//   void setNumber(int n1, int n2)
//   {
//     a = n1;
//     b = n2;
//   }
//   // Below line means that non member-sumComplex function is allowed to do anything with my private parts (data)
//   friend complex sumComplex(complex o1, complex o2); // this dosen't makes the function a member

//   void printNumber()
//   {
//     cout << "your number is " << a << " + " << b << "i" << endl;
//   }
// };

// complex sumComplex(complex o1, complex o2)
// { // this function will return complex as the o3 is a complex's object//also it takes two complex's objects // without line 16 --> The compiler will not allow the "sumComplex" to access the private element of the class //for this purpose if want an external function (non member function) to access the private data of our class , then we have to declare it inside the class that this function is allowed to access the private members(the a and b are the private) of the class though it isn't a member function.and due to allowing it is not going to be member it is just a foreign function which is just allowed by the class to access its data we do it by doing like line 16 // first write "friend" then name the "class" after this write the "function name and its arguments". now it is allowed to access the private members
//   complex o3;
//   o3.setNumber((o1.a + o2.a), (o1.b + o2.b)); // n1 and n2 will take these and assing them directly to a and b for object o3 of complex class it will even work withour line 16 because it is just an object of class is made here and it can call
//   return o3;
// }
// int main()
// {
//   complex c1, c2, sum;
//   c1.setNumber(1, 4);
//   c1.printNumber();

//   c2.setNumber(5, 8);
//   c2.printNumber();

//   sum = sumComplex(c1, c2);
//   sum.printNumber();

//   return 0;
// }

/* Properties of friend functions
1. Not in the scope of class//function doesn't becomes part of the class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() --> Invalid
3. Can be invoked without the help of any object//as i did line 40
4. Usually contains the objects as arguments//mostly we give it objects so that it will get access private data related to those objects
5. Can be declared inside public or private section of the class//as i did it in my on program
6. It can not access the members directly by their names and need object_name.member_name to access any member.//it mean that if i  write 'cout<<a;' inside the function at line 25 it doesn't makes any sense because a is not defined their , simply the a is of which object , as we had passed two objects , the a is basically defined in term of objects



*/

// my on retry it is  also without comment
/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include <iostream>
using namespace std;

class complexUstaz
{
  int a, b;
  friend complexUstaz adder(complexUstaz j1, complexUstaz j2);

public:
  void takeNumber(int n1, int n2)
  {
    a = n1;
    b = n2;
  }

  void shower()
  {
    cout << "Your complex number for " << a << " and " << b << " is " << a << " + " << b << "i" << endl;
  }
};

complexUstaz adder(complexUstaz j1, complexUstaz j2)
{
  complexUstaz com3;
  com3.takeNumber((j1.a + j2.a), (j1.b + j2.b));
  return com3;
}
int main()
{
  complexUstaz com1, com2, sum;
  com1.takeNumber(3, 6);
  com1.shower();

  com2.takeNumber(8, 2);
  com2.shower();

  sum = adder(com1, com2);
  sum.shower();

  return 0;
}