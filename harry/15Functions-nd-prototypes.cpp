// #include<iostream>
// using namespace std;

// /*
// int sum(int a ,int b){                formal parameters are the one which we actually made in function as here a and b are the formal parameters . a and b will be taking values from actual parameters num1 and num2 //this are what we just defined for function itself /inside only
//   int c=a+b;
//   return c;//do it is necessary for a function to return a value the answer is no because there are the functions which returns no value like there is;
// }*/
// void hp(){
//   cout<<"hello Talha sahab"<<endl;
// }
// //if i normally just put it after the closing braces of int main it will show error for solving this purpose we use functions prototypes
//   //prototypes function pehla sa hi compiler ko bata ha ka ya function ana wala ha jo  ya ya values la kar ya ya return karaaga

//   //Function prototypes
//   //type function-name (arguments);
// void g();
// int sum(int a ,int b);//as i mentioned the protoype here the compiler as usual come here ,my protoype will tell him that search the function exist some where ,then the compiler will find it by searching and will run the code successfully other wise skip if the function is written after main function without prototype over the int main

// // int sum(int a ,int b);//-->Acceptable
// // int sum(int a ,b    );//-->Not acceptable
// // int sum(int   ,int  );//--> Acceptable

// int main(){int num1, num2;
//   cout<<"Enter first number "<<endl;
//   cin>>num1;
//   cout<<"Enter second number "<<endl;
//   cin>>num2;
//   cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<sum(num1, num2)<<endl;//actuall parameters are the one which are actually passed to the function like here num1 and num2 are the actuall parameters
// hp();//example of function with no returns
// g();
//   return 0;//it tells the operating system that your program is excuted successfully
// }
// int sum(int a ,int b){//remeber talha we use most of the time both formal and actuall name alike so it is not gonna make a problem but just remmember the both are different
//   int c=a+b;
//   return c;
// }
// void g(){
//   cout<<"Hi! whatsup bro";
// }
// //functions is a top down structured programming,fuctions are do once and use forever
// //function ka matlab ha apna program ko tukro ma tordo or alag alag tukro sa alak alak kam karwawo

// this is the code without comment
#include <iostream>
using namespace std;

void hp()
{
  cout << "hello Talha sahab" << endl;
}

void g();
int sum(int a, int b);

int main()
{
  int num1, num2;
  cout << "Enter first number " << endl;
  cin >> num1;
  cout << "Enter second number " << endl;
  cin >> num2;
  cout << "The sum of " << num1 << " and " << num2 << " is " << sum(num1, num2) << endl;
  hp();
  g();
  return 0;
}
int sum(int a, int b)
{
  int c = a + b;
  return c;
}
void g()
{
  cout << "Hi! whatsup bro";
}
