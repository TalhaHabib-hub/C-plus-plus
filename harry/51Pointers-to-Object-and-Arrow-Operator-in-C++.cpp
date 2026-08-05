/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
        }
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
};
int main(){
    // // Complex c1;
    // // //Pointers to Objects
    // // Complex*ptr = &c1; // it is like --> int* ptr = &a;
    // //I can also make object this way
    // Complex*ptr = new Complex; // so talha can i made another object from this class after it
    // // c1.setData(45,34);
    // // (*ptr).setData(45,34);// arrow function is exactly like this just we have to do it this
    //  ptr->setData(45,34); //this mean dereference the pointer ptr. do setData of the thing which it is pointing
    // (*ptr).getData(); //must put the paranthesis sir said the point operater has higher preccedence
    // //  ptr->getData()// it is as good as (*ptr).getData();
    
    // // Array of objects
    // Complex *ptr2 = new Complex[3]; 
    // ptr->setData(534,5); 
    // (*ptr).getData();

// Zeroth way
    // Complex c1;
    // c1.setData(1,54);
    // c1.getData();

//first way:
    // Complex c1;
    // Complex* ptr = &c1;
    // (*ptr).setData(1,54)
    // (*ptr).getData();
    //// here we are accessing the public members of an object through pointer and also the paranthesis around the *ptr are very important 
    
//second way:
   
    // Complex *ptr = new Complex; //it is like -> int *ptr = new int(34)
    // (*ptr).setData(1,54); 
    // (*ptr).getData();
    // // here we are dereferencing a pointer which gives us the object of the class and we can say that we are accessing the function of the object by dereferencing a pointer in which the address of the class is stored again like the others as we use new keywords the name of the object is missing still it got position in the memory we can access it by the pointer( just dereference it )

//third way:<- using arrow operator
    

    // Complex *ptr = new Complex; //it is like -> int *ptr = new int(34)
    // (*ptr).setData(1,54); 
    // //ptr->.setData(1,54); 
    //  ptr->getData();
//      //this above two line will work the same way, what we have done is we wrote first ptr then we made the arrow operator( which tells the compiler to first dereference it first the run the methods for the thing which you will get after dereferencing)
//      //ptr-> = to which object it is pointing
//   //Talha this below one is the example to show you that the arrow function will work only for accessing methods, 
//     //  int i = 9;
//     //  int* p = &i;
//     //  cout<<"the value in p with arrow operator "<<*p;0;
//     //  cout<<"the value in p with arrow operator "<<p->;
//     // this one got failed because we can use this for accessing members only not for other way of accessing any variable as we have done it earlier

//4th way <- now we will discuss how can we make array of the object at the same time  (Array of objects)
 
// here for below is the logic that ptr will point first object, ptr+1 will point the second object, ptr+2 will point the third object, ptr+3 will point the fourth object  of the class complex  
    Complex *ptr = new Complex[4]; 
      ptr->setData(1,4); 
      ptr->getData();
    // (*ptr).setData(1,54); (*ptr) = ptr->
    //  ptr->.setData(1,54);
    //  (*(ptr+1)).setData(45,98); (*(ptr+1)=(ptr+1)->)
    //  (ptr+1)->getData();
    (*(ptr+1)).setData(45,98); 
     (ptr+1)->getData();
     (ptr+2)->setData(187,465); 
     (ptr+2)->getData();
     (ptr+3)->setData(1231,6544); 
     (ptr+3)->getData();
    return 0;
}