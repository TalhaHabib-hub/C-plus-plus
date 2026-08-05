#include<iostream>
using namespace std;

template <class T1=int, class T2=float, class T3=char> 
class Talha{
    public:
        T1 a;
        T2 b;
        T3 c;
        Talha(T1 x, T2 y, T3 z){
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
        }
};

int main(){
    Talha<> Ta(3,5.33,'t');
    Ta.display();
    cout<<endl;
    Talha<float, char, string> Ha(3.234,'R',"Talhabib");
    Ha.display();
}