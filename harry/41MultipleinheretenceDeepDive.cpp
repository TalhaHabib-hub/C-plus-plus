/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include <iostream>
using namespace std;
// Syntax for inheriting in multiple inheritence
// class Derived: visibility-mode base1, visibility-mode base2
// {
// Class body of class "DerivedC"
// };
class Base1//T
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class Base2//A
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class Base3//L
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class Derived : public Base1, public Base2 ,public Base3 //TAL
{
    public:
        void show(){
            cout<<"The value of Base1 is "<<base1int<<endl;
            cout<<"The value of Base2 is "<<base2int<<endl;
            cout<<"The value of Base3 is "<<base3int<<endl;
            cout<<"The sum of Base1, Base3 and Base2 is "<<base1int + base3int + base2int<<endl;
        }
};

// The inherited derived class will look something like this:
// base1int --> protected
// base2int --> protected
// set_base1int -> public
// set_base2int -> public
// show -> public (though it is visible still I mentioned)
int main()
{
    Derived Talha;
    Talha.set_base1int(23);
    Talha.set_base2int(25);
    Talha.set_base3int(87);
    Talha.show();
    return 0;
}