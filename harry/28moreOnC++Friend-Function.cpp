// //today we will see friends function pretty closer
// /*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// #include<iostream>
// using namespace std;
// class Y; //without it making friend will not be functional because the compiler will show error that what is the  Y you did mentioned there that is why we have declare the Y class here and we will define it later on , but talha if you uncomment this code you will see that at number line error shows for data accessing but not for num because when compiler reaches at class Y it has the information about X
// class X{
//   friend void add(X,Y);
//   int data;
//   public:
//   void setValue(int value){
//           data = value;
//         }
// };

// class Y{
//   friend void add(X,Y);
//   int num;
//    public:
//         void setValue(int value){
//           num = value;
// }
// };

// void add(X o1, Y o2){
//   cout<<"summing data of X and Y objects gives me "<< o1.data + o2.num;//Talha remember again that o1.data has the value that a1 has given to data while calling some function earlier at the same class
// }
// int main(){
//     X a1 ;
//     a1.setValue(3);

//     Y b1;
//     b1.setValue(5);

//     add(a1, b1);
//     return 0;
// }// sir wrote this progrm to just explain how friend functions works , and this simple example of how friend functions works // and also the complex example is in 28b

// this is the above program without comments

// today we will see friends function pretty closer
/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include <iostream>
using namespace std;
class Y;
class X
{
  friend void add(X, Y);
  int data;

public:
  void setValue(int value)
  {
    data = value;
  }
};

class Y
{
  friend void add(X, Y);
  int num;

public:
  void setValue(int value)
  {
    num = value;
  }
};

void add(X o1, Y o2)
{
  cout << "summing data of X and Y objects gives me " << o1.data + o2.num;
}
int main()
{
  X a1;
  a1.setValue(3);

  Y b1;
  b1.setValue(5);

  add(a1, b1);
  return 0;
}