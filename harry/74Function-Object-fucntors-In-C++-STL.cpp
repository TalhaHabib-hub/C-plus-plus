/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    // function object(Functor): Function wrapped in a class so that it avaialabe like an object
    int arr[] = {1,38,4,12,34,7};
    sort(arr, arr+3);// it is sorting in assending order (by default) among 5th element// arr is representing first element and sorting till <arr+3.
    sort(arr, arr+5, greater<int>());// now this one is sorting in decending order when i write 'greater<int>()'-> sir said this is function object passing -> we did it because sort method gets object
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}