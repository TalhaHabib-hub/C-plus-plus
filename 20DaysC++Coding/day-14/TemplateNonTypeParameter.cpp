// Templates can also take compile-time values, such as an array capacity.

#include <iostream>
using namespace std;
template <typename T, int N>
class FixedArray {
    T data[N]{};
public:
    T& at(int i) { return data[i]; }
};
int main() {
    FixedArray<int, 3> a;
    a.at(0) = 99;// this line is not calling the at() method, it is just using the array subscript operator to access the first element of the array and assign it the value 99. The at() method is only called when we use the at() method to access an element of the array, like in the next line where we do
    cout << a.at(0);
}
//what happening here is that we are creating a class template called FixedArray that takes two template parameters: a type T and an integer N. The class has a member variable data which is an array of type T with size N. The at() method allows us to access the elements of the array by index. In the main function, we create an instance of FixedArray with type int and size 3, set the first element to 99, and then print it out.