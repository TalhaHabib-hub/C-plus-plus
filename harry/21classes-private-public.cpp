/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// #include<iostream>
// using namespace std;
// //during the explaination of things i have mentioned the numbers of the lines so it can be about , not exact , i think you got this one
// // we had also studied that structures exists and those are user defined data types use to make templates (in the file "enums-struct-unions.cpp")// like this one that will be
// /*
// struct Employee
// {
//  int age ;
//  char alpha;
//  float salary;
//  }
//  then also similar in the main function
//  Employee harry;
//  harry.age = 34;
//  harry.alpha ='t';
//  harry.salary = 3234.432
//  */
// //the purpose to mentioin is look they are exactly the same . so the question is if structures were similar to classes and also powerfull we can put arrays pointers then why we use classes , the answer is there are somethings in the classes which are not in the structures example is data hidding is not in structures , the members of structures are accessible anywhere from our program ,so in some condition it becomes less safer Talha when you are making applications for banks like institutions where privacy is concerened greatly and
// //another limitation of structures is that we can not use functions in it , so if we have to use function we can use it in the class in a convinient way, so the taken is we can use struct also but if don't really have need of privacy and function involment we can use the struct for just only holding datas
// class Employee //lets say we have made a data type here with name Employee
// {
//   private: //specifiers //only the function in the class can access it
//       int a , b , c;
//   public:  //specifiers
//       int d, e;
//       //after writing just this below line i can impliment function after also outside this class but even i wrote that data outside it will still be considere the inner function and can be aplicable to those private datas
//       void setData(int a1, int b1, int c1); //it is defined letter on //  just declarationDeclaration // it mean i am going to make a setData function  where the input will be a1 b1 and c1 // we have just told the compiler that i will make their so that compiler will search for that , and it will go to line 38 where the syntax will be like that we will use scope resolution ::
//       void getData(){//this is for printing data
//         cout<<"The value of a is "<<a<<endl;
//         cout<<"The value of b is "<<b<<endl;
//         cout<<"The value of c is "<<c<<endl;
//         cout<<"The value of d is "<<d<<endl;
//         cout<<"The value of e is "<<e<<endl;
//       }
// }; //dear Talha you have to write semicolon after the closing brace of the class for avoiding syntax error , in function we will skip it as at the line number 41

// void Employee :: setData(int a1, int b1, int c1){//why we have did this because we are wanting to tell the employ that this are those set of data which have made inside the Employee that is why wrote the function here as void named the Employee the scope resolution then the function completion
//     a = a1;
//     b = b1;
//     c = c1;
// }
// int main(){
//    Employee harry;//for calling the class just write the name of the class then with a space only write the object you want to create.
//    harry.d = 34; //then the object will be accessible to the stuffs in the class
//    harry.e = 89;
//   //  harry.a = 456;   a is private data you can't exess it directly so any function in the function only that can exess it and that function is the set data . and this will throw error as it is private // by this way we are trying to directly access the data and change it but we have to access it indirectly , what we will do is will access the thing to which those private datas are accessible and that are the functions in side the function so accessing those function will take us the private stuffs here are the varibles
//    harry.setData(1,2,4);// calling the function inside the class after registering the object with the class so it clears that only the private data can be changed and excess by the inside so it will call at line 12 that will tell compiler i had made some where this sort of function so searching it will reach at line 22 where the passed value will be assign to those private values
//    harry.getData();

//   return 0;
// }
// Talha here is the example as sir said to do it
// /*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// #include<iostream>
// using namespace std;

// class Animal {
//   private:
//   int cost , milk ;
//   public:
//   int count ;
//   void privfind(int a , int b);
//   void show (){
//     cout<<"The cost is "<<cost<<endl;
//     cout<<"The milk is "<<milk<<endl;
//     cout<<"The count is "<<count<<endl;
//   }
//   };

//   void Animal :: privfind (int a , int b){
//     cost = a ;
//     milk = b;
//   }

// int main(){

//  Animal sheep ;
//  sheep.count =3453423;
//  sheep.privfind(23,3223);
//  sheep.show();
//   return 0;
// }

// This below one is the above code it don't has this very above example which i did as sir said to do it
#include <iostream>
using namespace std;

class Employee
{
private:
  int a, b, c;

public:
  int d, e;

  void setData(int a1, int b1, int c1);
  void getData()
  {
    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;
    cout << "The value of c is " << c << endl;
    cout << "The value of d is " << d << endl;
    cout << "The value of e is " << e << endl;
  }
};
void Employee ::setData(int a1, int b1, int c1)
{
  a = a1;
  b = b1;
  c = c1;
}
int main()
{
  Employee harry;
  harry.e = 89;

  return 0;
}