// /*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// //the syntax of writing a static variable is inside the class write it as "static int count"; and also outside the class write like "int Employee :: count;" and then Talha use it where ever you want to use it
// #include <iostream>
// using namespace std;
// // int total = 0; // it was my trick to solve the issue but sir had something else
// class Employee
// {                   // with this Employee class we will understand that , how can we make a kind of variable that should be same for all the objects of a class
//   int id;           // if you made something static this will be shared by all objects , the object will no more have this seperately as the have without static
//   static int count; // this line is telling the compiler that count is the static member of this class //reason of implimenting is on the line 46 , also line 25 will clear that for it (this line ) it is done otherwise will throw error // and also very important to remember that we don't have to initialize a static variable by zero because by default zero value will be  assigned to it when we make a static variable //Default value is zero
//   // here we are making such a variable that bounds with the class that is why in OOPs we also called them (to the static variable) class variable . so there is formed a class variable and it is not the property of object rather these becomes properties of class , it is like if we have many objects of this class the value of static variable will be taken from them previous object (other will not be taken from previous objects) //if we initailze any value to a static variable it will be a syntax error but if we want to make the value of static variable like lets say 1000 we can make it at line 27
// public:
//   void setData(void)
//   {
//     cout << "Enter the id " << endl;
//     cin >> id;
//     count++;
//   }

//   void getData(void)
//   {
//     cout << "The id of this employee is " << id << " The is employee number " << count << endl;
//     // total++; // earlier was made for line 4
//   }
//   static void getCount(void){
//     // cout<< id; //this will throw an error
//     cout<<"The value of count is "<<count<<endl;// this is out static function formed // if we sumup this again the static function will have access to only static function and static variable to other things they don't have any access like at line 24
//   }
// };

// int Employee ::count;//int Employee ::count = 1000 // this will take memory just for once only and will get update // the static variable will be initialize from zero when the first object is created // it just have only one copy and that is maintained // its visiblity or we can say scope that remains inside the class // and its life time is till the program termination //the variable willnot come with every object it will come with the class only

// int main()
// {
//   Employee harry, rohan, lovish;
//   // count is the static data member of class Employee
//   // These three will share one count varible
//   // harry.id = 1;
//   // harry.count =1;// cannot do this as id and count are private by default
//   harry.setData();
//   harry.getData();
//   Employee::getCount();//look here we have run the function in the class without giving the reference of an object so it is the syntax for calling static  functions

//   rohan.setData();
//   rohan.getData();
//   Employee::getCount();

//   lovish.setData();
//   lovish.getData();
//   Employee::getCount();
//   // cout<<"The total employees are "<< total<<endl; // i did it from line 4

//   return 0;
// } // Now this is a program but here there is no way to preserve that how many employees are registered , because as we have made int count at line 8 , then each object will have its count , that is why i can not pass count from one object to another object this problem can be saved by "static variable"
// static function also exists , used when we want a function that can  only and only access all the static variables , though they are function or variables
// if you are wanting a function that can be run with a class name (which would have no need for an object to run) for that we will make a static function

// this is the above code without comments

#include <iostream>
using namespace std;
class Employee
{
  int id;
  static int count;

public:
  void setData(void)
  {
    cout << "Enter the id " << endl;
    cin >> id;
    count++;
  }

  void getData(void)
  {
    cout << "The id of this employee is " << id << " The is employee number " << count << endl;
  }
  static void getCount(void)
  {

    cout << "The value of count is " << count << endl;
  }
};

int Employee ::count;

int main()
{
  Employee harry, rohan, lovish;

  harry.setData();
  harry.getData();
  Employee::getCount();
  
  rohan.setData();
  rohan.getData();
  Employee::getCount();

  lovish.setData();
  lovish.getData();
  Employee::getCount();

  return 0;
}