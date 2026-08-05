/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
using namespace std;
/*
Syntax for initialization list in constructor:
constructor (argument-list) : initialization-section-> use to intialize value quickly
{
    assignment + other code;
}
*/
class Test{
    int a;
    int b;
    public:
        // Test(int i, int j): a(i),b(j){//--> will work
        // Test(int i, int j): a(i),b(i+j){//--> will work
        // Test(int i, int j): a(i),b(2*j){//--> will work
        // Test(int i, int j): a(i),b(a*j){//--> will work
        // Test(int i, int j): a(i+b),b(j){//-> this makes sense that it will give us garbage value because first a will be assigned so before assigning some value to a we don't have b
        // Test(int i, int j): b(j),a(i+b){//->this one has the real issue because the one which is declared first value will be initialized to that value first as in the line 12 we have initialized 'a' first so first value will be assign to a (initialize to a), and Talha it is very true because when i ultered the position(time of initialization and when the b got initialized first) for this line the code got executed 
            //so Talha in case of constructors shortly i can say that we can initialize varibles of the class in initialization-section and remember Talha the one which is declared first will get the value (will be initialized) first thouhg in the case of other way it doesn't happens the same way, here is the prove when i did this it work greatly ' b= i, a = j + b;' or ' b= i;a= j + b;')
            // b= i,a= j + b;
        Test(int i, int j): b(j),a(i+b){
            cout<<"constructor executed"<<endl;
            cout<<"Value of a is:"<<a<<endl;
            cout<<"Value of b is:"<<b<<endl;
        }
};

int main(){
    Test t(4,6);
    return 0;
}