/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
using namespace std;
template <class T>
class Talha{
    public:
     T data;
     Talha(T a){
        data = a;
     }
    void display();
};
template <class T>
void Talha<T>:: display(){
    cout<<"data -> "<<data<<endl;
}
void funct(int i){
    cout<<" first function "<<i<<endl;
}
template<class T>// templatized
void funct(T i){
    cout<<" second  function "<<i<<endl;
}
int main(){
    Talha<float> h(4.665);
    h.display();

    cout<<h.data<<endl;

    Talha <string> I("TalhaSir");
    I.display();

    cout<<endl;
    funct(5.4);
    funct(4);
    return 0;
}
// harry sir also show that he made a fucntion then he overloaded that also he he templatized the second one now if he called the function the nontemplatized one was call, it shows that  Exact matcht takes the highest priority if there is not the exact match  the templatized one will be called