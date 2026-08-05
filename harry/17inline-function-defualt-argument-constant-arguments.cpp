// #include<iostream>
// using namespace std;

// int product (int i , int j){//normally what happens here is that (though the executioin seems fast but in large programs it will add up) repeatively actuall arguments are copied then the return is given every time if we call the function for many time i would say it takes lots of spaces for better managment we use inline function if the functions is performing small tasks //so there comes a thing that why we don't use inline functions for all sorts of functions .so if we make over big functions inline our cash will then have lack of space simply the program will take alots of space. so when to use inline functions ,use it if the function is performing very low tasks and compiler will replace all (sir harry) mean in iine function the actuall parameters are not copied just the compiler will replace them in the function (my opinion)
//  //now when we have not to use inline fuction : 1) when there is recursion don't use it ,it is not recommended 2) when static varible are using there 3) also when there are loops and switch statments it becomes confusing using inline functions so at this situation the inline function using is need not to use ,simplu not recommended to use below lines with inline functions mean when there are many lines
// static int c = 0;//static mean this will be excuted once after it when the functon is called again this will not considere mean the value of c willn't be 0 and more ,the value will be the previous updated one//you will use it alot ,There are many things in the multiple function calls you will not want to repeat them like here
//  c++;//next when the function is run , the value of c will be retained / save. as the c is a static variable after the funtion excution all other variable then will be forgotten online static variable will be saved
//   return i * j + c;
// }//making a function inline is actually a request to the compiler to please make my fuction inline and now the compiler will look at the function and accordingly will make it function mean it will not any functions  you want an inline function (your point need to be valid that why you are wanting to make a function inline) if the compiler found that your making a function inline without a reasson , compiler is not going to make it inline function simply inline is a request for the compiler it is on him (hahah) that he accepts or rejects that request so it is actually drault optimization that compiler for us

// float moneyRecieved(int actualMoney ,float factor = 1.040){//all this setup was to show that default argument can also be written .// Talha its necessary to write default arguments after compulsory arguments mean if change the place of these two above arguments it will show error.the result of it will be : all the default arguments are need to be placed at extreme right and compulsory need to be on left at that case function will be excuted otherwise will show errors
//    return actualMoney * factor;

// }
// //dear if you don't want modification of argument in a function you can use const ,this is mostly valid for reference varible and pointers and we pass argument by reference at that time it becomes signigficant
// // int strlen( const char *p){

// // }
//  int main(){
//   // //Inline function
//   // int a , b ;
//   // cout<<"Enter the value of a and b"<<endl;
//   // cin>> a >> b ;
//   // cout << "the product of "<< a <<" and "<< b << " is "<< product(a , b)<<endl;
//   // cout << "the product of "<< a <<" and "<< b << " is "<< product(a , b)<<endl;
//   // /*.......................................................................*/
//   int money ;
//   cout << "How much money do you want to put?"<<endl;
//   cin>> money;
//   cout<< "If you have  "<<money<< " Rs in your bank account , you will recive "<<moneyRecieved(money)<< " after one year"<<endl;

//   return 0;
// }
// this one is the above code without comments
#include <iostream>
using namespace std;

int product(int i, int j)
{
  static int c = 0;
 
  return i * j + c;
}

float moneyRecieved(int actualMoney, float factor = 1.040)
{
  return actualMoney * factor;
}

int main()
{

  int money;
  cout << "How much money do you want to put?" << endl;
  cin >> money;
  cout << "If you have  " << money << " Rs in your bank account , you will recive " << moneyRecieved(money) << " after one year" << endl;

  return 0;
}
