/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include <iostream>
using namespace std;
class A
{
    int a;

public:
    A setData(int a1)
    {
        a = a1;
        return *this;
    }
    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{

    A a;

    a.setData(4).getData();
    a.getData();

    return 0;
}
// /*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// #include<iostream>
// using namespace std;
// class A{
//     int a;
//     public:
//         // void setData(int a){for the sack of readability if we do this, it will give us garbage value for a and it mean it will not assing to a
//         //    a = a; // sir said if we write this priority will be given to the local a
//         // } // to avoid this problem we do this
//         //we use the this-> key word which represent that object which invokes the member function, Sir said this a pointer, the object for which setdata is running for that object set this a of the class equal to the parameter a
//         // void setData(int a){
//         //     this->a = a;
//         // }
//         // if you want to return that object for which you have setted the data
//         // A & setData(int a1){  // sir did this
//         A setData(int a1){
//             a = a1;
//             return *this;
//         }
//         void getData(){
//             cout<<"The value of a is "<<a<<endl;
//         }
// };
// int main(){
//     // this is a keyword which is a pointer which points to the object which invokes the member function
//     // another use of this function is that if you are wanting to return that object for which this member function is running
//     A a;
//     // a.setData(4); this one returning me an object so i can do it with it
//     a.setData(4).getData();
//     a.getData();

//     return 0;
// }