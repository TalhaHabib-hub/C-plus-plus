// /*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// #include<iostream>
// using namespace std;

// int main(){
//     int *ptr;
//     int a =9;
//     int b=3;
//     ptr = &b;
//     cout<<"*ptr "<<*ptr<<endl;
//     cout<<"ptr  "<<ptr<<endl;
//     cout<<"a    "<<a<<endl;
//     cout<<"b    "<<b<<endl;
//     cout<<"&b   "<<&b<<endl;

//     return 0;

// }
/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// pointers to derived class // the binding of fucntion to the pointer is on the basis  of the type of pointer, if the pointer is a base pointer which will point the function of only the base class even if it is pointing the derived class

#include<iostream>
using namespace std;

class BaseClass{
    public:
        int a;
        void setting(){
            cout<<"value of a is in BaseClass "<<a<<endl;
        }
};
class DerivedClass : public BaseClass{
    public:
        int b;
        void setting(){
            cout<<"value of a is in DerivedClass "<<a<<endl;
            cout<<"value of b is in DerivedClass "<<b<<endl;
        }
};
int main(){
    BaseClass * baseClassPointer;
    BaseClass baswala;
    DerivedClass derivedwala;
    baseClassPointer =&derivedwala;// though it is pointing the derived class object still if we call the function it will still call the function in the baseclass this is what we called late binding
    baseClassPointer->a=45;// this pointer is pointing object of derived class but can onlu access the members which are inherited from the base class as it is the pointer of base class
    baseClassPointer->setting();
    // baseClassPointer->b = 8756;-> it is not valid
    baseClassPointer->setting();
    
    DerivedClass * derivcClasspointer;
    // derivcClasspointer = & baswala;// this one is also not working
    derivcClasspointer = &derivedwala;
    derivcClasspointer->a=86;
    derivcClasspointer->b=8776756;
    derivcClasspointer->setting();

    return 0;
}

