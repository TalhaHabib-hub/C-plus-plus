// /*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// #include<iostream>
// using namespace std;

// int main(){
//     // Basic Example
//     int a = 4;
//     int* ptr = &a;

//     cout<<"The value of a is "<<*ptr<<endl;// here i dereferenced the value at ptr

//     int *p = new int(40); // -> so in this way talha we can dynamically initialize the pointers , here Talha we dynamically have made an int variable (did at such unfamilar place by using the keyword new) and then typed paranthesis inside which we put the value but the really different thing here is we have not named the int variable and just assigned a value in noname intiger and assing its address to the pointer .// this here is simply saying to the pointer that when you got derefferenced you acts like a other variable so take this one, this one has address but not any name(identifier), when you get derefferencing be the holder of the values, so seems unusual to me but i got shocked that value is stored without its identifier
//     cout<<"The value at address p is "<<*p<<endl;
//     // Dynamically allocating contigous block of memory, with 'new' key word
//     float *arr = new float[3];// this one is saying Talha, make array of size three.(Talha when I defference the arr it is giving the first value stored in the first index-> 10.09(even if i dereferenced the pointer)), another twist i tried to do *arr[0] but it didn't work instead just writing the pointer, square brackets, droped the index got the value, maybe these are allowed thisway because they don't have there on identifier
//     arr[0]= 10.09;
//     // arr[1]= 10.1; <- in the next line( i can write in this way too)
//     *(arr+1) = 10.1;
//     arr[2]= 10.2;
//     // delete[] arr; --> these frees the array from its memory location
//     cout<<"The value at *arr is "<<*arr<<endl;
//     cout<<"The value at arr[0] is "<<arr[0]<<endl;
//     cout<<"The value at arr[0] is "<<arr[1]<<endl;
//     cout<<"The value at arr[0] is "<<*(arr + 2)<<endl;

//     // delete opereator
//     return 0;
// }
// this code without comments

#include <iostream>
using namespace std;

int main()
{

    int a = 4;
    int *ptr = &a;

    cout << "The value of a is " << *ptr << endl;

    int *p = new int(40);
    cout << "The value at address p is " << *p << endl;

    float *arr = new float[3];
    arr[0] = 10.09;

    *(arr + 1) = 10.1;
    arr[2] = 10.2;

    cout << "The value at *arr is " << *arr << endl;
    cout << "The value at arr[0] is " << arr[0] << endl;
    cout << "The value at arr[0] is " << arr[1] << endl;
    cout << "The value at arr[0] is " << *(arr + 2) << endl;

    return 0;
}