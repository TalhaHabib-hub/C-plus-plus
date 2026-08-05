// /*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// #include<iostream>
// using namespace std;

// // float funcAverage(int a, int b){
// //     float avg = (a+b)/2.0;
// //     return avg;
// // }
// // float funcAverage2(float a, int b){
// //     float avg = (a+b)/2.0;
// //     return avg;
// // }
//   // instead of this i can to those tasks with just using one class  using temp class
 
// template <class T1, class T2>
// float funcAvg(T1 a, T2 b){
//     float avg = (a+b)/2;
//     return avg;
// }
// int main(){
//     // float a;
//     // a = funcAverage(5,6);
//     // // cout<<a;
//     // printf("The average of these numbers is %.3f", a);
//     // a = funcAverage2(5.5,6);
//     // // cout<<a;
//     // printf("\nThe average of these numbers is %.3f", a);

//     float a;
//     a = funcAvg(4.3,5);
//     cout<<a<<endl;;
//     a = funcAvg(43,5.98);
//     cout<<a;

//     return 0;
// }

// of the using the template we have the example of swaping i can make a single function now which can any kind of number

/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
using namespace std;

template <class T>
T swapp(T &i, T &k){
    int temp = i;
    i = k;
    k = temp;
}
int main(){
    int a = 4.6, b = 7;
    cout<<"The a: "<<a<<" and b: "<<b<<endl;
    swapp(a, b);
    cout<<"after swaping values"<<endl;
    cout<<"The a: "<<a<<" and b: "<<b<<endl;


    return 0;
}