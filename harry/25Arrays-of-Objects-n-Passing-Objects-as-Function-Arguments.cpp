// // Today we will study how can we make Arrays of Objects
// /*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// #include <iostream>
// using namespace std;

// class Employee
// {
//   int id;
//   int salary;

// public:
//   void setId(void)
//   {
//     salary = 122;
//     cout << "Enter the id of employee " << endl;
//     cin >> id;//these are not static that is why use seperatly by all objects
//   }

//   void getId(void)
//   {
//     cout << "The id of this employee is " << id << endl;
//   }
// };
// int main()
// {
//   // Employee  harry, rohan, lovish, shruti;
//   // harry.setId();
//   // harry.getId();
//   // if the number of the employee is increased too much like 1000,2000 at the time for us it would be ideal that we will write the name of a company and store all its employee in an array , we can do it by this
//   Employee fb[4];//it mean this --> Employee fb[0],fb[1],fb[2],fb[3] ,four objects
//   // fb[0].getId();
//   // fb[0].setId(); //we can do it in a for loop
//     for (int i = 0; i < 4; i++)
//     {
//     fb[i].setId();
//     fb[i].getId();
//     }
//   // for (int i = 0; i < 4; i++)
//   // {
//   //   fb[i].setId();

//   // }
//   // for (int i = 0; i < 4; i++)
//   // {
//   //  fb[i].getId();
//   // }
// //to a function give objects
//   return 0;
// }

// this is the above code without comments

#include <iostream>
using namespace std;

class Employee
{
  int id;
  int salary;

public:
  void setId(void)
  {
    salary = 122;
    cout << "Enter the id of employee " << endl;
    cin >> id;
  }

  void getId(void)
  {
    cout << "The id of this employee is " << id << endl;
  }
};
int main()
{

  Employee fb[4];
  for (int i = 0; i < 4; i++)
  {
    fb[i].setId();
    fb[i].getId();
  }

  return 0;
}