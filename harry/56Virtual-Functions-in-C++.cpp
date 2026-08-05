/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
using namespace std;
// in polymorphism is the property with which the objects which are belonging to different classes the respond to the same kind of message
class BaseClass{
    public:
        int var_base;
        virtual void display(){// it is saying if mytype pointer is typing derived class object, then must be their function will run, don't run my one 
          cout<<"1 Displaying Base class variable var_base "<<var_base<<endl;
        }
};// actually the compiler bind, yani function ka address sa object ko associate karta ha
class DerivedClass : public BaseClass{
    public:
        int var_derived = 98;
        void display(){
            cout<<"2 Displaying Base class variable var_base "<<var_base<<endl;
            cout<<"2 Displaying Derived class variable var_derived "<<var_derived<<endl;
        }
};
int main(){
    BaseClass * baseClassPointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    baseClassPointer = &obj_derived;
    baseClassPointer->var_base = 45;
    // baseClassPointer->var_derived = 45; it is still not judging the data member of derived class though it is pointing the object of the derived class, and also although we made the display function virtual then the function of the derived is accessed by the pointer of base class , but still i am unable to accessed the data members
    baseClassPointer->display();
    return 0;
}