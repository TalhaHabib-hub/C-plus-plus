// // how memory is allocated in C++ inside objects , when you make a class than you make an object , if we look at very high level at the memory allocation how it seems it becomes very necessary for a programer to know it

// /*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// #include <iostream>
// using namespace std;

// class Shop
// {
//   int itemId[100];
//   int itemPrice[100];
//   int counter;

// public:
//   void initCounter(void) { counter = 0; }//makes counter value 0
//   void setPrice(void);// to line 18
//   void displayPrice(void);                                           // by Harry sir
// };

// void Shop :: setPrice(void)//
// {
//   cout << "Enter ID of your item number " << counter + 1 << endl;
//   cin >> itemId[counter];
//   cout << "Enter Price of your item" << endl;
//   cin >> itemPrice[counter];
//   counter++;//these function will have seperate location (and it will retain the value in it for the nextime for itself when it is recall but if the variable in it has a value ,  if someother function comming after( and has the same name variable) this function will not get that value this function will start the same variable from first time initialzed value) for counter then other functions
// }

// void Shop ::displayPrice(void)
// {
//   for (int i = 0; i < counter; i++)
//   {
//     cout << "The Price of item with ID " << itemId[i] << " is " << itemPrice[i] << endl;
//   }
// }
// int main()
// {
//   Shop dukaan; //made an object by using a class (Shop) with name dukaan
//   dukaan.initCounter(); // it will make the counter value other wise it will give the garbage value// calling function at 13
//   dukaan.setPrice();// calls at line 14
//   dukaan.setPrice();//in below my on program i have used for loop for it
//   dukaan.setPrice();
//   dukaan.displayPrice();
//   return 0;
// }
// the statment that says that class doesn't takes any space while objects takes is partly true not completely  true because like when you make a class, some of the memory that is being allocate that becomes for all the objects , like the memory that functions takes and their are also the memories which are seperate for all objects like let say i made a Employee class for it if we make objects the name of those objects will have seperate memories and lets say their are functions to make final salary result , so i will write in the class for all the objects , we will not use different memory for all the objects , the compiler for the C++ is very smart that all those things that are common for all objects compiler stores them for once , and those things which are not common for all the objects , it allocates them seperate memory

// now we will study how to use arrays inside classes

// Talha made a program that first of all stores their id and price by using arrays and then shows the results ,additionally this program can stores thing anymuch you like first will ask how many do you want to store

/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int count;
// class Amazon
// {
//   int itemsId[100];                                      // by Talha
//   int itemsPrice[100];

// public:
//   void countStarter(void) { count = 0; } // the counter will help us first in showing item 1 item 2 etc //then for
//   void Saver(void);
//   void resultShower(void);
// };

// void Amazon ::Saver(void)
// { // countStarter(); //nesting member function it will make count zero all the time when we call it so i had to call it for once
//   cout << "Id for Item No# :" << count + 1 << endl;
//   cin >> itemsId[count];
//   cout << "And The price for it :" << endl;
//   cin >> itemsPrice[count];
//   count++;
// }

// void Amazon ::resultShower(void)
// {
//   for (int i = 0; i < count; i++)
//   {
//     cout << "Item Id : " << setw(2) << itemsId[i] << " Its Price : " << setw(5) << itemsPrice[i] << endl;
//   }
// }

// int main()
// {
//   int storeWant;
//   cout << "Total Items : " << endl;
//   cin >> storeWant;
//   Amazon Shop1;
//   Shop1.countStarter();//call 1
//   for (int i = 0; i < storeWant; i++)//call 2
//   {
//     Shop1.Saver();
//   }
//   Shop1.resultShower();//call 3

//   //   return 0;
// }

// Another // in this program almost similar to above but additionally stores items with their names rather then their ids
//  #include <iostream>
//  using namespace std;

// class Shop
// {
//   string itemName[100];
//   int itemPrice[100];
//   int counter;                                      // by Talha

// public:
//   void initCounter(void) { counter = 0; }//makes counter value 0
//   void setPrice(void);// to line 18
//   void displayPrice(void);
// };

// void Shop :: setPrice(void)//
// {
//   cout << "Enter N0# " << counter + 1 <<" Item's Name " <<endl;
//   cin >> itemName[counter];
//   cout << "Price of "<<itemName[counter]<<" will be " << endl;
//   cin >> itemPrice[counter];
//   counter++;
// }

// void Shop ::displayPrice(void)
// {
//   for (int i = 0; i < counter; i++)
//   {
//     cout << "The Price of  " << itemName[i] << " is " << itemPrice[i] << endl;
//   }
// }
// int main()
// {
//   Shop dukaan; //made an object by using a class (Shop) with name dukaan
//   dukaan.initCounter(); // it will make the counter value other wise it will give the garbage value// calling function at 13
//   dukaan.setPrice();// calls at line 14
//   dukaan.setPrice();//in below my on program i have used for loop for it
//   dukaan.setPrice();
//   dukaan.displayPrice();
//   return 0;
// }

// there are two programs above the second is my on made the first is here without commets.

// how memory is allocated in C++ inside objects , when you make a class than you make an object , if we look at very high level at the memory allocation how it seems it becomes very necessary for a programer to know it

/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include <iostream>
using namespace std;

class Shop
{
  int itemId[100];
  int itemPrice[100];
  int counter;

public:
  void initCounter(void) { counter = 0; }
  void setPrice(void);
  void displayPrice(void);
};

void Shop ::setPrice(void) //
{
  cout << "Enter ID of your item number " << counter + 1 << endl;
  cin >> itemId[counter];
  cout << "Enter Price of your item" << endl;
  cin >> itemPrice[counter];
  counter++;
}

void Shop ::displayPrice(void)
{
  for (int i = 0; i < counter; i++)
  {
    cout << "The Price of item with ID " << itemId[i] << " is " << itemPrice[i] << endl;
  }
}
int main()
{
  Shop dukaan;
  dukaan.initCounter();
  dukaan.setPrice();
  dukaan.setPrice();
  dukaan.setPrice();
  dukaan.displayPrice();
  return 0;
}