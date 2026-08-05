// #include<iostream>
// using namespace std;

// int sum(int a , int b){
//   int c = a + b;
//   return c;
// }
// void swaptry(int a, int b){//when sir was mentionning this swaping in the lecture the purpose was unacheived (also he had named both the actual and formal parameters alike  )because this i and j and are formal arguments not the actuall one these are just copies changeing them (swaping will have no effect on the actual parameters)   temp  a  b
//   int temp = a;  //   4    4  5
//       a = b;     //   4    5  5
//       b = temp;  //   4    5  4 //so just this will not swap a and b
// }
// //so to make them swap we have to use the pointer method for writing the functional function for swaping now this below function will be functional for swaping

// //it is called call by reference uaing pointers because the formal arguments are taking the reference of values (addressses)
// void swapbyreferencepointer(int* e , int* f){//now it will catch the address of the value that were to be copied
//   int temp = *e;//as the e is the address now by using sterisk we will get the value at this address we also called dereferencing so the value at address e will be assign to temp ,i declare temp twice because it is a local varible its memory location will be remove from the memory when the compiler finishes the function in which it is that  is why it is showing no errors
//   *e = *f;
//   *f = temp; // now it worked

// }

// // it is just a second way of using call by reference by using refek
// void swapReferenceVariable(int &m , int &n){//ow this m and n will point o and p respectively it mean changing the value of m will also change the value of o and p because in simple words by using & we are given two names to a single varible. lets say my name is Talha and also Abdullah .if you ask for Talha and then Abdullah in both of the cases i will come
//   int temp = m ;
//   m = n ;
//   n = temp;
// }

// //now lets as a extra work we are doing "return by reference" here the function will return a reference . it works like this lets say Talha you are wanting to return m,  then if we do like line number 47 which is an int ('int &' mean we are returning refernce varible so the type of this function will be reference variable ) at line 47 the refernce varible that is reference of o  which we assign 798 to it ,so in the result we see that value of o is 798 instead of 999 .so this way Talha we can make barabar ('-- sir used' i will say equal more likely assign)a function call to 798 or number, because the function is returning a reference, reference to what reference to o because i am returning m and m is a reference variable that is pointing m so that o will change .this " swapReferenceVariable2(o , p)" at line 47 will return the reference of o and i am making that equal to 798,so that 789 will be equal to the value of o (what i write are mostly harrys words)
// int & swapReferenceVariable2(int &m , int &n){ //int & will return reference varible
//   int temp = m ;
//   m = n ;
//   n = temp;
//   return m ;
// }
// //as functions can be call by two ways call by value and call by reference
// int main(){

//   int o = 23, p = 999;
//   //cout<<"The sum of 4 and 5 is "<<sum(4,5);
//   cout<<"\nThe value of o is "<<o<<" and That of p is "<<p<<endl;
//   //swaptry (o , p);   //will be unable to swap
//   //swapbyreferencepointer(&o , &p);  //will be able to swap using pointer call by reference //harry sir wrote "&o , &p" instead of "o , p" which is also functional for this program mean for swaping the values
//   //swapReferenceVariable(o , p);  //call by reference using C++ reference Variables

//   swapReferenceVariable2(o , p) = 798;// according to harry sir it is not that much explain purpose was to show that this also happens
//   cout<<"The value of o is "<<o<<" and That of p is "<<p<<endl;
//   return 0;
// }
// this one is the above code without comments
#include <iostream>
using namespace std;

int sum(int a, int b)
{
  int c = a + b;
  return c;
}
void swaptry(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
}
void swapbyreferencepointer(int *e, int *f)
{
  int temp = *e;
  *e = *f;
  *f = temp;
}
void swapReferenceVariable(int &m, int &n)
{
  int temp = m;
  m = n;
  n = temp;
}
int &swapReferenceVariable2(int &m, int &n)
{
  int temp = m;
  m = n;
  n = temp;
  return m;
}

int main()
{
  int o = 23, p = 999;
  cout << "\nThe value of o is " << o << " and That of p is " << p << endl;
  swapReferenceVariable2(o, p) = 798;
  cout << "The value of o is " << o << " and That of p is " << p << endl;
  return 0;
}
