/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
using namespace std;
/*
Case1:
class B: public A{
  // Order of execution fo constructor -> first A() and first(B)
};

Case2:
class A: public B, public C{
  // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C(), then B() and A()
};

*/

class Base1{
    int data;//<- private data members
    public:
        Base1(int i){// this class has its constructor this will also go to the derived class at the end
            data = i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void printDataBase1(void){
            cout<<"The value of data1 is "<<data<<endl;
        }
};
class Base2{  
    int data2;//<- private data members
    public:
        Base2(int i){// this class has its constructor this will also go to the derived class at the end
            data2 = i;
            cout<<"Base2 class constructor called"<<endl;
        }
        void printDataBase2(void){
            cout<<"The value of data2 is "<<data2<<endl;
        }
};
class Derived: public Base1, public Base2{
    int derived1, derived2;// <- private data members
    public:
        Derived(int a, int b, int c, int d): Base1(a),Base2(b){// i don't what was wrong with me that  i was thinking that the compiler will come initially here then assing value to the to base1 and base2 then '" haha ! i was thinking that the control will go to first base class and excutes his constructor( it happened because i forgot that those constructor will also be inherited to this class thankyou.)"
            derived1 = c;
            derived2 = d;
            cout<<"Derived class constructor called"<<endl;}
        void printDataDerived(void){
            cout<<"The vlaue of derived1 is "<<derived1<<endl;
            cout<<"The vlaue of derived2 is "<<derived2<<endl;
        }
};
int main(){
    Derived Talha(11,22,33,44);
    Talha.printDataDerived();
    // Talha.printDataBase1();
    // Talha.printDataBase2();
    return 0;
}

