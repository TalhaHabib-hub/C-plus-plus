/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
using namespace std;

class Employee
{
    public:
        static int activeCount;
 
        Employee()  { activeCount++; 
        cout<<"Construtctor is called"<<endl;}
        ~Employee() { activeCount--;cout<<"Distructor is called"<<endl; }
};
int Employee::activeCount = 0;
 
void doWork()
{
    Employee temp1, temp2;
    cout << "Inside doWork: " << Employee::activeCount << endl;   // 2
}   // temp1 and temp2 go out of scope HERE -> both destructors run
 
int main()
{
    Employee e1;
    cout << "Before doWork: " << Employee::activeCount << endl;    // 1
    doWork();
    cout << "After doWork: " << Employee::activeCount << endl;      // back to 1
}
