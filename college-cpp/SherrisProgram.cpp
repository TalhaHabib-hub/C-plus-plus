// This program demonstrates operator overloading of the prefix increment (++) operator in C++.
#include <iostream>
using namespace std;

class Counter
{
private:
     int count;

public:
    Counter() : count(0)
    {
    }

    unsigned int get_count()
    {
        return count;
    }

    Counter operator++() 
    {
        ++count;            

        Counter temp;       
        temp.count = count; 

        return temp;        
    }
};

int main()
{
    Counter c1, c2; // c1 = 0, c2 = 0

    cout << "\nc1 = " << c1.get_count();
    cout << "\nc2 = " << c2.get_count(); 

    ++c1;           // c1 = 1
    c2 =c1;      // c1 = 2, c2 = 2

    cout << "\nc1 = " << c1.get_count(); 
    cout << "\nc2 = " << c2.get_count() << endl; 

    return 0;
}