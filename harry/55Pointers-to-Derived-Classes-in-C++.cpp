/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// The compile time polymorphism can be done by function oveloading and operator oveloading yani jo hamari function ki binding ha, woh addressing ki binding jaha function ha, agar appka ak object ha uska mana ak add function call karna ha to we add function konsa address wala function ko call karaga ab hosakata ha ka ham na add function das bar define kia ho , konsa wala ko call karaga , uski binding kab honi ha compile time ma honi ha ya run time ma honi ha is hisab sa hum na define kia tha compile time polymorphism and runtime polymorphism, compile time ma decision lalia jata ha compile duara or binding kardi jati ha function ka us address par jisko woh run karna wala ha, function overloading ka case ma operator overloading ka case ma , run time ka matlab ka jab program run hota ha tab decide hota ha, yani ka binding late hota ha  islia hum isa late binding bhi kahta han, abb hama run time polymorphism janna ka lia aik concept ko samajhna chahya jisa hum kahta ha pointer to derived classes in cpp
#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying Derived class variable var_base " << var_base << endl;
        cout << "Displaying Derived class variable var_derived " << var_derived << endl;
    }
};
int main()
{// agar ma na aik pointer banaya jo ka base class ka aik object ko point karrha ha 
    BaseClass *base_class_pointer; // int *ptr // ya  pointer base class ka pointer ko point karaga, to ya ha =-> ya hamara jo base class pointer 
    BaseClass obj_base;// int a;
    DerivedClass obj_derived; // int b
    base_class_pointer = &obj_derived; // pointing base class pointer to derived class // ptr = &b
    // sir na kaha ma base class ka pointer ko point karadunga derived class ka object sa
    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived = 34;// this will through error
    base_class_pointer->display();

    // DerivedClass* derived_class_pointer;
    // derived_class_pointer = &obj_derived;
    // derived_class_pointer->var_derived =180;
    // derived_class_pointer->display();
    base_class_pointer->var_base = 35434;
    base_class_pointer->display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 987180;
    derived_class_pointer->var_derived = 180;
    derived_class_pointer->display();

    return 0;
}