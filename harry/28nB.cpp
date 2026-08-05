// /*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// //also sir told that referencing variable are discuseed in video number 7
// #include<iostream>
// using namespace std;
// class c2;
// class c1{//classes are user defined data types

//   friend void exchange(c1 &x, c2 &y);
//       int val1;
//       public:
//           void indata(int a){
//               val1 = a;
//           }
//           void display(){
//               cout<< val1 <<endl;
//           }
// };

// class c2{
//   friend void exchange(c1 &x, c2 &y);// here it saying that this function will get the reference of c1 not gets the object copy
//       int val2;
//       public:
//           void indata(int a){
//               val2 = a;
//           }
//           void display(){
//               cout<< val2 <<endl;
//           }
// };
// //now we will write a function that will swap the private data of class c1 and c2 , it mean they will exchange there values for private datas
// /*
// Trick to swap 2 numbers:
// temp = a;
// a = b;
// b = temp;
// */// it is friend
// void exchange (c1 &x, c2 &y){//happens//here the if it was just x it would copy the  oc1 but &x will actually get co1 //it is called referencing// i said this but when we were studying call by value call by reference we first take and save (simply copy) the address at position of x(it is discused in 16file ) like int* x ; then we were aproaching the value by doing *x , because x was a pointer and doing this was giving the value in that address, but things here seems different , though with & we get the address but approach by just using x.val1. somehow it was in the case of classes may be there are some difference and also it is here that we are passing objects to the function not just normal int or floats and also the important thing usning x.val1 (you know talha it is like saying that x.vali will give us the value that the objects has given to val1 in when it used the class)//sorry this way was also mentioned in that video 
//     int tmp = x.val1;
//     x.val1  = y.val2;
//     y.val2  = tmp;
// }

// int main(){
//   c1 oc1;
//   c2 oc2;

//   oc1.indata(34);//if your are wanting that you made a obj at  44 and 45 line and exactly at that time if you want to initailize , we will do it like automatically by using the concept of constructor (it is explained in 29th file),it is like we will do something that even skipping the line 48 and 51 we will be able to set values .
//   oc2.indata(64);

//   cout<<"The value of c1 before exchanging  becomes :";
//   oc1.display();
//   cout<<"The value of c2 before exchanging  becomes :";
//   oc2.display();

//   exchange(oc1, oc2);

//   cout<<"The value of c1 after exchanging  becomes :";//"<< oc1.display();" this was throwing error because this function is not returning any value it is just printing and we can do it by just calling , if it has to return some value(in this case it is void ) it would not showed any errors
//   oc1.display();
//   cout<<"The value of c2 after exchanging  becomes :";
//   oc2.display();

//   return 0;
// }

// it is just rewriting by my on self : making two classes and after passing values to them then altering the assgined values by another function ,my one seems better, just  joke joking
/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include <iostream>
using namespace std;
class B;
class A
{
    friend void exchanger(A &j, B &k);
    int dubba1;

public:
    void takeit(int a)
    {
        dubba1 = a;
    }
    void showit()
    {
        cout << dubba1;
    }
};

class B
{
    friend void exchanger(A &j, B &k);
    int dubba2;

public:
    void takeit(int a)
    {
        dubba2 = a;
    }
    void showit()
    {
        cout << dubba2;
    }
};

void exchanger(A &j, B &k)
{
    int temp = j.dubba1;
    j.dubba1 = k.dubba2;
    k.dubba2 = temp;
}

int main()
{
    A obj_a;
    B obj_b;

    obj_a.takeit(2345);
    obj_b.takeit(25);
    cout << "This values is  passed from obj_a to its class A :";
    obj_a.showit();
    cout << "\nThis values is  passed from obj_b to its class B :";
    obj_b.showit();

    exchanger(obj_a, obj_b);

    cout << "\nThis values is  exchanged passed vlaue that was earlier send from obj_a to its class A , to B's value :";
    obj_a.showit();
    cout << "\nThis values is  exchanged passed vlaue that was earlier send from obj_b to its class B , to A's value :";
    obj_b.showit();

    return 0;
}
