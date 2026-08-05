/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include <iostream>
using namespace std;

class Base
{
    int data1; // private by default and not inheritable
public:
    int data2;
    void setData();// these are public members of Base class only these can be inherited by any other class (9101112)
    int getData1();
    int getData2();
};

void Base ::setData(void)// we can define the class even outside the class after declaring them in the class by this way . same for (2126)
{
    data1 = 10;// with the public function of the base class value is assigned to a private element of the base class, it is correct becuase elements of the class will always have access to the private element of the class in which they are
    data2 = 20;// this one just a public element all the objects of the class will have access for it. 
}

int Base ::getData1()// this public member function of the class is returning a private member if we get this function it mean we can have access to the private element by the object( mean we can get the private value from outside the class)
{
    return data1;
}

int Base ::getData2()//this one just returning the public member
{
    return data2;
}
class Derived : public Base // Here we have made a class by inheriting the public element of the base (we did it publically : it mean the public (obviosuly only the public members can be inherited) members of the base class will be the public member of the base class)
{ // Class is being derived publically
    int data3;// it is the private member of the base class

public:
    void process();//these two are the public members of the derived class 
    void display();
};

void Derived ::process()//here the 35 function  is defined
{
    data3 = data2 * getData1(); // main thing is here data3 is accessible ( we are able to use it ) also the data2 (because was a public method of the base class we had inherited it into the derived class(publically) so it becomes the public member of the derived class and even if it was a private member of the derived class (when we had inherited it privately) this function would still be accessible by this function because it is the function of the derived class it can have access to the private element of the derived class ) , but this function can't access the data1 because it is not inherited because it was the private element of the base class. but derived class has inherited the getData1 function of the base class and it is also the member of the derived class so can access the data1 which is private , but we cannot access it like data2.
}
void Derived ::display()//a function of the derived class that is printing/accessing the data1 indirectly but data2 and data3 directly
{
    cout << "Value of data 1 is " << getData1() << endl;
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;
}
int main()
{
    Derived der;// made an object from the derived class
    der.setData();// with the object of the derived class accessing the function of the base class (it becomes possible because this function is also the member of the derived class as it was inherited.) in the next part we have inherited it privately that is why it becomes (there) unaccessible by the object of the class ( because Talha remember this for your entire life the private members of the class can't be access by the objects of the class they can only be access inside the class.
    der.process();// this two are simple to understand because this are the public member of the derived class so accessing them dirctly by an object of the base class is not a big thing , as a person said me their is not a rocket science in it
    der.display();
    return 0;
}// Dear Talha i am not writing the actuall code here as i do ( write without commments ) because the second part of this (38B) is almost like this one and there are not such comments but the different is there the line 52 statment will show error because the setData is inheretid privately.