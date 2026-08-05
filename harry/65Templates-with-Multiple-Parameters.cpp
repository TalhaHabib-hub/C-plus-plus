/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
using namespace std;
/*
  CLASS TEMPLATES WITH MULTIPLE PARAMETERS(ONE TWO OR MORE THAN TWO)
template<class T1, class T2.....(COMMA SEPATATED)>
class nameOfClass{
    // body
}
*/
template<class T1, class T2>
class myClass{
    public:
        T1 data1;
        T2 data2;
        myClass(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }
        void display(){
            cout<<this->data1<<endl<<this->data2<<endl;
        }

}
;
int main(){
    myClass<int, double> obj1(1,4.323343);
    obj1.display();
    cout<<"----------------------"<<endl;


    myClass<float, int> obj2(1.97,3);
    obj2.display();
    cout<<"----------------------"<<endl;


    myClass<string, char> obj3("Talha",'C');
    obj3.display();
    cout<<"----------------------"<<endl;


    myClass<int, bool> obj4(1,false);
    obj4.display();
    cout<<"----------------------"<<endl;



    
    return 0;
}

// // simply we write this way my Talha 
// /*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// #include<iostream>
// using namespace std;
// template <class T1, class T2>
// class TalhaClass{
//     T1 a;
//     T2 b;
//     public:
//         TalhaClass(T1 i, T2 k){
//             a = i;
//             b = k;
//         }
//         void display(){
//             cout<<a<<" and "<<b<<endl;
//         }
// };
// int main(){
    
//     TalhaClass<float, int>S1(4.44,5);
//     S1.display();
//     return 0;
// }