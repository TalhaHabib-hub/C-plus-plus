// you can give an object to a function , as we know that we can use to print any objects or when we have to take the value of an object then we will make a method and can put in public method (function), so we can make a static method , and to that static method we can give arguments , and those arrguments can be objects , or we can make a normal method and can give argument to it which can be our objects, so it is not necessary that the argument should only be int float etc that can be an object of an class , now let say how it works
// part b of 25
/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// #include<iostream>
// using namespace std;

// class complex{
//   int a;//a and b are both independent dimensions of complex numbers here
//   int b;
//   public:
//   void setData(int v1, int v2){
//     a = v1;
//     b = v2;
//   }

//   void setDataBySum(complex o1, complex o2){//here we are taking object of complex class
//     a = o1.a + o2.a; // o1.a = 1 , o2.a = 3 , o1.b = 2 , o2.b = 4
//     b = o1.b + o2.b; // o1 = c1 , the value it has assing to a was 1,same for the others like the last one o2 has copied c2 and o2.b has the value that was passed by c2 to b and that is 4.
//     // cout<<o1; it is not printing o1 because it contain arguments in itself it isn't an argument
//     // cout<<"o1.a = "<<o1.a<<" ,o2.a = "<<o2.a<<" ,o1.b = "<<o1.b<<", o2.b = "<<o2.b<<endl; //it is I think the syntax of passing objects to a method it if you have assign the arguments to a function earlier, it will be known by this new method , here o1 means
//   }

//   void printNumber(){
//     cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;//think of complex number like a 2 dimensional vector.
//   }
// };                     // This one written by (harry sir)

// int main(){// sir calls these driver run program
//   complex c1, c2, c3;
//   c1.setData(1,2);
//   c1.printNumber();

//   c2.setData(3,4);
//   c2.printNumber();

//   c3.setDataBySum(c1, c2);//
//   c3.printNumber();
//   return 0;
// }
// Talha ma zan haya hush korisur kina nast e objecto (c1 oor c2) chaka argumentan e classa (complex name classo) kori pass kori atatn e variablo (a and b ) andrani save korisur function zaria (setData) achi ; achi ki objectan (c1, c2) chaka ki ata variable (a and b) tan argumentan save koristai ata objectan tan e khur functionoata(->setDataBySum) pass arrar . atta objectan as an argument ata temporary argument 'setDataBySum'a  copy koritai "o1" ra. d haya maza hushkina o1.a nawshiko na horo matlab haya ki, o1(copy of c1) ki objecto ki copy koristai asa 'a'ota kia value ditistai asa 'o1.a' ta assing hoi, hush no koriko bush ishnari naa haya ha '.' dot istimal bitishar has

// haya kia ki shani Talha hamitan maqsad haya ki object d as an argument e khur functionota pass boni

// and Talha remeber to catch/ copy the objects as an argument you should not use int float or anything istead in the "type" just write the name of the object's class in this case we had to write complex as it was the name of the object's class
/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/

// This one my on written(Talha)
// #include<iostream>
// using namespace std;

// class complexKhan {
//   int a ;
//   int b ;
//   public:
//    void setData (int v1, int v2){
//     a = v1;
//     b = v2;
//    }

//    void setDataBySum(complexKhan obj1, complexKhan obj2){
//      a = obj1.a + obj2.a;
//      b = obj1.b + obj2.b;
//    }

//    void resultShower(){
//     cout << "The sum is "<<a<<"+"<<b<<"i"<<endl;
//    }
// };

// int main(){
//   complexKhan cp1, cp2, cp3;

//   cp1.setData(1,2);
//   cp1.resultShower();

//   cp2.setData(3,5);
//   cp2.resultShower();

//   cp3.setDataBySum(cp1,cp2);
//   cp3.resultShower();

//   return 0;
// }
// result
// The sum is 1+2i      a = obj1.a(1) + obj2.a(3);  //1 + 3 = 4
// The sum is 3+5i      b = obj1.b(2) + obj2.b(5);  //2 + 5 = 7 //and then shown together by result shower
// The sum is 4+7i

// this one is top most code without comments not my one
#include <iostream>
using namespace std;

class complex
{
  int a;
  int b;

public:
  void setData(int v1, int v2)
  {
    a = v1;
    b = v2;
  }

  void setDataBySum(complex o1, complex o2)
  {
    a = o1.a + o2.a;
    b = o1.b + o2.b;
  }

  void printNumber()
  {
    cout << "Your complex number is " << a << "+" << b << "i" << endl;
  }
};

int main()
{
  complex c1, c2, c3;
  c1.setData(1, 2);
  c1.printNumber();

  c2.setData(3, 4);
  c2.printNumber();

  c3.setDataBySum(c1, c2); //
  c3.printNumber();
  return 0;
}