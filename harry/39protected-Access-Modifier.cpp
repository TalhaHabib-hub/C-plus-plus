/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
using namespace std;

class Base{
    protected:    
        int a; // if i want to let it be privat still want to inherit in the derived class your b is very private but for a you are wanting that let it be private still it get inherited for this purpose we use protected , proteced is not a private members (but for the sack of understanding we can say that protected is a private member which can be inherited)
    private:
        int b;

};
// 
//For a protected member:
//                      Public derivation  Private Derivation Protected Derivation
// 1. Private members    Not Inherited      Not Inherited       Not Inherited
// 2. Protected members  Protected          Private             Protected
// 3. Public members     Public             Private             Protected

class Derived: protected Base{//if i want that the protected should here be private for it i will inherit it in private mood
  
};

int main(){
    Base b;
    Derived d;
    // cout<<b.a;//i can't print it because it is protected member but can  i can inherit
    // it will not work since a is protected in both  base as well as derived class= 
    return 0;
}