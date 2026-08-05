/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// #include<iostream>
// using namespace std;
// //in this section we will discuss the copy constructor
// class Number{
//     int a;
//     public:
//         Number(){};
//         Number(int num){
//             a = num;
//         }
//         // the compiler when see the call for copy constructor looks in the program if there is a copy constructor and if finds run that for the call , if not do the coping by it's on copy constructor , which can be call for any objects that will be made
//         Number(Number &obj){
//             cout<<"Copy constructor called !!! ";
//             a = obj.a;
//         }// without it is still working becuse the compiler automatically makes a copy constructor at the backend .// when no copy constructor is found, compiler supplies its own copy constructor (harry sir)

//         void display(){
//             cout<<"The number for this object is "<< a <<endl;
//         }
// }
// ;
// int main(){
//     Number x, y, z(5),z2;// without line 8 , for the first two the progrm will not run becuase making a constructor mean that it should run at the time when the object is made. no problem if there is oveloading of constructor if any one can execute for the object you made it will not show any error becaue there can be object , with different sorts like if the argument design resonate them will run. and also we can again execute those constructor later on lately after declaring the objects , and i said there that we just will decive the compiler that look their is a construtor for the one which have no arguments , but inside those no action performs .as i did Sir Talha at file number 33.
//     z.display();
//     //for the comment at line 23 lets say , i am making an object (z10) that should resembles exactly like the z
//     Number z1(z);// Copy constructor invoked
//     z1.display();

//     z2 = z; // copy constructor will not be call (it mean the copy contructor of the program will not run but the compiler copy constructor will be called for it)
//     z2.display();

//     Number z3 =z; //now this time the copy constructor will be called , it happend because we did it at the time of object creation // when you assing an already present object at that time the copy constructor will not be invoked
//     z3.display();

//     return 0;
// }// copy constructor is that constructor which makes copy of other objects

// this one is the above code without any comments
#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number() {};
    Number(int num)
    {
        a = num;
    }

    Number(Number &obj)
    {
        cout << "Copy constructor called !!! ";
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl
             << endl;
    }
};
int main()
{
    Number x, y, z(5), z2;
    z.display();

    cout << "For this one the copy constructor will be invoked " << endl;
    Number z1(z);
    z1.display();

    cout << "For this one the copy constructor will noy be invoked " << endl;
    z2 = z;
    z2.display();

    cout << "For this one the copy constructor will be invoked " << endl;
    Number z3 = z;
    z3.display();

    return 0;
}
