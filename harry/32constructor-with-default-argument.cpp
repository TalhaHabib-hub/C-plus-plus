/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
using namespace std;

class simple{
    int data1;
    int data2;
    public:
        simple(int a, int b = 9){//it is the example of constructor with default argument
                data1 = a;
                data2 = b;
        }

        void printData();
};
void simple :: printData(){
    cout<<"The value of data1 and data2 is "<<data1<<" and "<<data2<<endl;
}
int main(){
        simple s(1);//though we have use the default arguments if still we pass arguments from here those assing values will be overwrite by the one which are passed from here
        s.printData();
    return 0;
}                     




      /*A Tree in Heaven*/