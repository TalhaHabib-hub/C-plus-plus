// /*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// #include<iostream>
// using namespace std;
// class vector{
//     public:
//         int* ptr;
//         int size;
//         vector(int i){
//             size = i;
//             ptr = new int[size];
//         }
//         int addProduct(vector &v){
//             int tempadder=0;
//             for (int i = 0; i < size; i++)
//             {
//                 tempadder += this->ptr[i]*v.ptr[i];
//             } 
//             return tempadder;
//         }
// };
// int main(){
//     vector a1(3);
//     a1.ptr[0]=6;
//     a1.ptr[1]=6;
//     a1.ptr[2]=6;
//     vector a2(3);
//     a2.ptr[0]=6;
//     a2.ptr[1]=6;
//     a2.ptr[2]=6;
//     int k = a1.addProduct(a2);
//     cout<<k;
//     return 0;
// }           ^
 //            |
 //            |
 // The above code was transfered to this below code using templates
 
 /*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
using namespace std;

template<class T>
class vector{
    public:
        T * ptr;
        int size;
        vector(int i){
            size = i;
            ptr = new T[size];
        }
        T addProduct(vector &v){
            T tempadder = 0;
            for (int i = 0; i < size; i++)
            {
                tempadder += this->ptr[i] * v.ptr[i];
            }
            return tempadder;
        }
};
int main(){
    vector <float>v1(3);
    v1.ptr[0] = 6.5;
    v1.ptr[1] = 6.6;
    v1.ptr[2] = 6.6;
    vector <float>v2(3);
    v2.ptr[0] = 6.4;
    v2.ptr[1] = 6.6;
    v2.ptr[2] = 6.6;
    float a = v1.addProduct(v2);
    cout<<a<<endl;

    
    return 0;
}

