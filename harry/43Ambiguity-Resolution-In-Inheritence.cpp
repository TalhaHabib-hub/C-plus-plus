// sir is saying let say that there are two base classes for a derived class and if it has derived two fuction from its both base class but they also have the same names then which one will be executed in the derived class if the object of the class is calling it

/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"How are you!"<<endl;
        }
};

class Base2{
    public:
        void greet(){
            cout<<"Kaisa ho!"<<endl;
        }

};

class Derived : public Base1, public Base2{
    int a;
    public:
        void greet(){
            Base1::greet();// the Derived class though will inherit both the greet function from its base class but after writing this way it is only using the the Base1 class's greet function, so this way we solve ambiquity
        }
};

// The purpose of these below two class is that if a derived class has a function with the same name if a function is inherited from the base class the function of the derived class will overwrite the inherited function, so here ambiguity is resolving on its own
class B{
    public:
        void say(){
            cout<<"Hello world"<<endl;
        }

};

class D : public B{
    int a;
    // D's new say() method will overide base class's  say() method.
    public:
         void say(){
            cout<<"Hello my beautiful people"<<endl;
         }
};
int main(){
    // // Ambiguity 1-->
    // Base1 base1obj;
    // Base2 base2obj;
    // base1obj.greet();
    // base2obj.greet();
    // Derived d;
    // d.greet();

    // Ambiguity 2
    D d1;
    d1.say();
    return 0;
}