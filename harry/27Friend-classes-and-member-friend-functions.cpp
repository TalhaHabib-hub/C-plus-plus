/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// things are simple don't be scared

// The soul purpose was that we have to look how compiler executes a program and and it is also simple thing that we can declare things earlier and later on we can define them as we did at line 8 for
//  #include<iostream>
//  using namespace std;

// // Forward declaration
// class Complex;// compiler runs program from the start as i had defined Complex after Calculator class (but i have used Complex objects in Calculator class ), without mentioning earlier (so called forward declaration) that their exist a class i am declaring that here the compiler willnot show an error
// class Calculator{
//    public:
//         int add(int a , int b){
//           return (a + b);
//         }

//         int sumRealComplex(Complex, Complex);// the definition of function is not here ,if i had then i would be using a class which i haven't even made; it just tells the compiler yes their exist a class //dir said at line 8 you just said that a class with complex name exists but haven't told me that the a and b that you use in the definition exists there and yes it is trur if we look at line 35 we used a and a is declared later on that is why it is showing errors

// };

// class Complex{// it should say Calculator ka "sumRealComplex" ko ijazat ha mara private members ko access karna ki
//   friend int Calculator :: sumRealComplex(Complex o1, Complex o2);
//    int a, b;                                    // o --> (object) my on made
//    public:
//         void setNumber(int n1, int n2){
//           a = n1;
//           b = n2;
//         }

//         void printNumber(){// didn't use this one in the program because had copied from the previous program can say extra part
//           cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
//         }
// };
// // now we can defined the earlier declared function because we got the value for a or can say o1.a , o2.a
// int Calculator::sumRealComplex(Complex o1, Complex o2){
//           return (o1.a + o2.a);
//         }

// int main(){
//   int res;
//     Complex o1 , o2 ;

//     o1.setNumber(1,4);//sends value to line 22//for o1 a = 1, and b = 4,
//     o2.setNumber(5,7);//sends value to line 22//for o2 a = 5, and b = 7,

//     Calculator calc;
//     res = calc.sumRealComplex(o1, o2);//sends values ot line 20 then goes to 32
//     cout<<"The sum of real part of o1 and o2 is "<<res<<endl;
//   return 0;
// }

/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// #include<iostream>
// using namespace std;
// class complex;// declare it here to tell the compiler that no worries , you will not find earlier the class of the objects that are copy as argument inside the function of your current class (calculator), i declared it so that compiler will not be amazed that from where these arguments have came , i had to been through them first but things related to these were not seen before ,that is why i have declared a class earlier for the compiler understanding no matter you will find the class of these objects latter on , so please don't make error that i haven't seen such things anywhere
// class calculator{
//   int a , b;
//   public:
//         int add(int n1 , int n2){
//           return n1 + n2;
//         }

//         int adder (complex, complex);//declared here with the obj of some other class which will come later in the program as line 52 had said all these

// };
// class complex{
//   int a , b;
//   public:
//         friend int calculator::adder(complex o1, complex o2);// this function just assign value to a and b for obj1 and obj2
//         void getNumber(int n1 , int n2){
//           a = n1;
//           b = n2;
//         }
//         void shower(){// i have not used this in my program
//           cout<<"The value is "<<a<<" + "<<b<<"i"<<endl;
//         }
// };
// int calculator::adder(complex o1, complex o2){// here that function is defined to make program free of errors , it is a function of calculator a class defined earlier , mentioned here because now after the complex class we got a and b from the function of complex class .
//           return (o1.a + o2.a);//this function will return sum of the number that obj1 assign  to a and obj2 to a
//         }
// int main(){
//   complex obj1 , obj2;
//   obj1.getNumber(6,3);
//   obj2.getNumber(7,4);
//   calculator adding;
//   int picker = adding.adder(obj1,obj2);
//   cout<<"The sum of the real part of the complex number is "<<picker<<endl;

//   return 0;
// }

// dear talha after all those above things sir talk about it it is some sort of similar to the top program but for clearification i used to write it again as nothing is complex for you, to work with this program comment the above programs and uncomment the below one
// now we will see what is friend class
/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// #include<iostream>
// using namespace std;
// class complex;
// class calculator{
//   public:
//       int add(int i , int j){
//        return i + j;
//      }

//     int sumRealComplex(complex, complex);
//     int sumCompComplex(complex, complex);

//   };

// class complex{
//   // individually declaring functions as friends (but what should we do if we had to made many like 1000) //we will do like line 117

//   // friend int calculator :: sumRealComplex(complex, complex);
//   // friend int calculator :: sumCompComplex(complex, complex);

//   //now if there are lots of functions , istead of making those function one by one the friend it will be better if just the class as a friend then each function in class can access elements without making them friend seperately;that is the reason we use friend class//if we made the calculator class a friend of complex ,that will be mean that any function from calculator class now can access the private data / element

//   //Aliter(in this case): Declaring the entire calculator class a friend and we have to write this
//   friend class calculator;
//   int a , b;
//   public:
//         void setter (int v1, int v2){
//           a = v1;
//           b = v2;
//         }
//         void shower (){
//           cout<<"The the complex number is "<<a<<" + "<<b<<"i"<<endl;
//         }
// };

// int calculator :: sumRealComplex(complex o1, complex o2){
//     return (o1.a + o2.a);}

// int calculator :: sumCompComplex(complex o1, complex o2){
//     return (o1.b + o2.b);}

// int main(){
//   complex obj1, obj2;
//   obj1.setter(4,6);
//   obj2.setter(8,2);

//   calculator cal;
//   int pick = cal.sumRealComplex(obj1,obj2);
//   cout<<"The sum of the real part of obj1 and obj2 is "<<pick<<endl;

//   calculator cal2;
//   int pick2 = cal2.sumCompComplex(obj1,obj2);
//   cout<<"The sum of the complex part of obj1 and obj2 is "<<pick2<<endl;

//   return 0;
// }

// summary in urdu
/* aik class thi complex aik class thi calculator , hum na calculator ma do function banaya , calculator aik class ha jo hama basic calculation karna ma madad dati ha or calculation karta han to value return karta ha , phire calculator ka functions ko private member of complex ki zarurat pari to hamna complex sa ijazat la kar har function ka lia permission kar access karwaya agar function zyada han oor wo call karta ha ak hi class sa to humna us class ko hi friend banaya jisa friend class kahata han*/
/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include <iostream>
using namespace std;
class complex;
class calculator
{
public:
  int add(int i, int j)
  {
    return i + j;
  }
  int realAdder(complex, complex);
  int compAdder(complex, complex);
};

class complex
{
  // friend int calculator :: realAdder(complex ,complex);
  // friend int calculator :: compAdder(complex ,complex);
  friend class calculator;
  int a, b;

public:
  void set(int i, int j)
  {
    a = i;
    b = j;
  }

  void shower()
  {
    cout << "The complex numbers is " << a << " + " << b << "i" << endl;
  }
};

int calculator ::realAdder(complex o1, complex o2)
{
  return o1.a + o2.a; // do you know talha sir o1 copies the object c1 and o1.a will get the value that c1 gave to a while using a function in a class where this function is existing
}
int calculator ::compAdder(complex o1, complex o2)
{
  return o1.b + o2.b;
};
int main()
{
  complex c1, c2;
  c1.set(54, 87);
  c2.set(41, 37);
  calculator calc;
  int taker = calc.realAdder(c1, c2);
  cout << "The sum of the real part of c1 and c2 is " << taker << endl;
  calculator calc2;
  int taker2 = calc2.compAdder(c1, c2);
  cout << "The sum of the complex part of c1 and c2 is " << taker2 << endl;

  return 0;
}