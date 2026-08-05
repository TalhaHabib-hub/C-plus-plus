/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"Base class constructor"<<endl;
    }
       virtual void show(){
            cout<<"I am base class function"<<endl;
        }
};
class child : public Base{
    
    public:
     child(){
        cout<<"child class constructor"<<endl;
    }
        void show(){
            cout<<"I am child class function"<<endl;
       
        }
};

int main(){
    child obj;
    obj.show();
    obj.Base::show();
    
    return 0;
}
// abstruct class object can't be created 
// other class are called concrete