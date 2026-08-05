/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
using namespace std;

class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Talha Base1 is called!"<<endl;
        }
        void printBase1(){
            cout<<"The value of Base1 is : "<<data1<<endl;
        }
};
class Base2{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout<<"Talha Base2 is called!"<<endl;
        }
        void printBase2(){
            cout<<"The value of Base2 is : "<<data2<<endl;
        }
};
class DerivedJan : public Base2, public Base1{
    int gotit1 , gotit2;
        public:
            DerivedJan(int a, int b, int c, int d): Base1(a),Base2(b){
                gotit1 = c;
                gotit2 = d;
                cout<<"Sir Talha Derived class is called "<<endl;
    }
    void showDerived(){
        cout<<"The 1st variable value of (derived class): "<<gotit1<<endl;
        cout<<"The 2nd variable value of (derived class): "<<gotit2<<endl;

    }
};

int main(){
    DerivedJan Jan1(34,23,1000,1289);
    Jan1.printBase1();
    Jan1.printBase2();
    Jan1.showDerived();
    
    return 0;
}