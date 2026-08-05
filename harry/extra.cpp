// /*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// #include<iostream>
// using namespace std;

// int main(){
//   string a = "Talha Habib"; 
//   int i = 6287;
//   cout<<a.length(); // the .length is use to find the length of a string
//   // cout<<i.length(); we can not use it for other then strings

//   cout<<a.at(7);// the characters of the string will have numbering from 0 so at 7 will be 0-7 at 8th position is a in Talha Habib
// //01234567 at 7 is a ,at 3 is h
// int b;
// cin>>b;
//  for (int  i = 0; i < b; i++)
//  {
//   cout<<"don"<<endl;
//   if (i == 4){

  
//   exit(0);}//the exit in for loop works like break;
//  }
 
//   return 0;

// }

/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
using namespace std;
class complex {
  int a;
  int b;

  public:
  void setData(int v1, int v2){
        a = v1;
        b = v2;
  }

  void setDataBySum(complex o1, complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
  }

    void printNumber(){
     cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
  }
};
int main(){
  complex c1, c2, c3;
  c1.setData(1, 2);
  c1.printNumber();

  c2.setData(3, 4); 
  c2.printNumber();
  
  c3.setDataBySum(c1 , c2);
  c3.printNumber();
  return 0;
}