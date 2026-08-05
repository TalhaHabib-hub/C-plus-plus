// #include<iostream>
// using namespace std;

// //if security is not that much concern in your program for your data use structures otherwise use classes for security and also for functions and data envolment
// typedef struct employee//i just wrote typedef infront of struct epmployee and also after closing curly brace it wrote ep it can be anything the benefit is that for calling it i will not have to write ' struct employee ' and can call it by just writing ep, typedef simply means that the thing to which i was calling struct employ now i want to call it just ep
// {
//   /* data */
//   int eId;
//   char favChar;
//   float salary;
// }ep;

// union money
// {
//   /* data */// you will use one data type if you want to use them in place of money if i want that from this my all setups i want to use just one sort of data types so for that purpose we use an important feature of C++ that optimizing memory on your own will ( memory ko apni marzi sa optimize karna )  and C++ give us this facility by using
//   int rice;//4
//   char car;//1
//   float pounds;//4//C++ says that among rice car and pound if you want to you use one thing why not i do sharing memory for all of them.suppose if it was struct it would take 9 bytes if we use unions it will alocate (in this case 4 bytes) the a single memory for all of them because you will just one of them why we store any one you use in just one memory location . if you were using rice after that if you write like car= 352 the previous value will be overwrite as there is only one memory location
// };

// int main(){
//   //structures are user defined data types which we use to combine different types of things because for storing same types of items we use arrays
//   //unions are some sort of like structures but the provide us better memory managment
//   ep talha;
//   struct employee yari;
//   struct employee sahib;
//   talha.eId=1;
//   talha.favChar='c';
//   talha.salary=120000;
//   cout<<"The value is "<<talha.eId<<endl;
//   cout<<"The value is "<<talha.favChar<<endl;
//   cout<<"The value is "<<talha.salary<<endl;

//   union money m1;
//   m1.rice =34;
//   m1.car='t';
//   cout<<m1.rice<<endl;//it will give garbage value because the first one is overwrite so at a time talha use only one
//   cout<<m1.car<<endl;

//  enum Meal { Breakfast, lunch,dinner};//use to make program read able
//  Meal m=Breakfast; //for this m1 it is showing error i wrote it m2 it worked
// //  cout<<m1<<endl;
//  cout<<Breakfast<<endl;
//  cout<<lunch<<endl;
//  cout<<dinner;

//   return 0;
// }
// this is the above code without comment:
#include <iostream>
using namespace std;

typedef struct employee
{

  int eId;
  char favChar;
  float salary;
} ep;

union money
{

  int rice; // 4
  char car; // 1
  float pounds;
};

int main()
{

  ep talha;
  ep yari;
  employee sahib;
  talha.eId = 1;
  talha.favChar = 'c';
  talha.salary = 12000000;
  yari.eId = 1;
  yari.favChar = 'T';
  yari.salary = 1200;
  cout << "The value is " << talha.salary << endl;
  cout << "The value is " << talha.favChar << endl;
  cout << "The value is " << talha.salary << endl;
  cout << "The value is " << yari.salary << endl;
  cout << "The value is " << yari.favChar << endl;
  cout << "The value is " << yari.salary << endl;

  union money m1;
  m1.rice = 34;
  m1.car = 't';
  cout << m1.rice << endl;
  cout << m1.car << endl;

  enum Meal
  {
    Breakfast,
    lunch,
    dinner
  };
  Meal m2 = Breakfast;

  cout << Breakfast << endl;
  cout << lunch << endl;
  cout << dinner;

  return 0;
}