/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// Vector -> vectors are sequence containers representing arrays that can change in size

#include<iostream>
#include<vector> // to use stl we must have to include appropriate classes through header files
using namespace std;

template <class T>
// writing a method which is taking a vector
void display(vector<T> &v){ // I have used the vector<int> as data type like i was using float, int.  and then i have got &v (reference  of integer vector)
  cout<<"Displaying this vector "<<endl;
    for (int i = 0; i < v.size(); i++) // v.size() will return the size of the vector
    {
       cout<<v[i]<<" "; // I am here using the vector as i was using the array
    //    cout<<v.at(i)<<" "; //  at() will tell us that at the index written in its parathesis what element is there

    }
    cout<<endl;
    
}
int main(){
    //ways to create a vector
    vector<int> vec1; // zero length integer vector
    int element, size=5;
    // cout<<"Enter the size of your vector"<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter an element to add to this vector: ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();

    vector<char> vec2(4); //4-element character vector
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // // vec1.insert(iter+1,500, 566);
    // display(vec1);

    // vec2.push_back('5');
    // display(vec2);
    // vector<char> vec3(vec2); // 4-element character vector from vec2
    // display(vec3);
    vector<int> vec4(4, 13); // 4-element vector of 3s
    display(vec4);
    cout<<vec4.size();
}












//          --> my on written stuffs during the lecture
//     // Ways to create a vector 
//     // syntax of making a vector first write vector then in the openning and closing <> we write the type of the vector then we give name to the vector
//     vector<int> vec1; // zero length vector( vector manages its length automatically) 
//     vector<char> vec2(4); // four element character vector
//     // vec2.push_back('5');
//     // display(vec2);
//     // vector<char> vec3(vec2); // integer vector
//     // display(vec3);
//     vector<int> vec4(6, 18); // 6-element vector of 3s // integer vector
//     display(vec4);
//     int element, size = 5;
//     // there are some methods of vector
//     // display(vec3);
//     // display(vec2);
//     // cout<<"Enter the size of your vector: "<<endl;
//     // cin>>size;
//     // for (int i = 0; i < size; i++)
//     // {
//     //     cout<<"Enter an element to add to this vector";
//     //     cin>>element;
//     //     vec1.push_back(element); // this is the method of vector to add things to a vector
//     // }
//     // vec1.pop_back(); // removes one the element from last
// //     display(vec1);
// //     vector<int> :: iterator iter = vec1.begin(); // to make iterator we have to use this syntax " vec1.begin()" because i want to point iterator with first element of vec1
// //     // vec1.insert(iter, 566);  // iterator is like a pointer that will point element in the vector so when we use insert we should put the iterator in the paranthesis
// //     vec1.insert(iter+1,5, 566);  // if i want to insert the 566 at second place i will write iter+1 the ,5, is telling how much i want to insert the 566
// //     display(vec1);
//     return 0;
//}



// the code without comments
// #include<iostream>
// #include<vector>
// using namespace std;

// template <class T>

// void display(vector<T> &v){ 
//   cout<<"Displaying this vector "<<endl;
//     for (int i = 0; i < v.size(); i++) 
//     {
//        cout<<v[i]<<" "; 

//     }
//     cout<<endl;
    
// }
// int main(){
   
//     vector<int> vec1; 
//     int element, size=5;
//     vector<char> vec2(4); 
//     vector<int> vec4(4, 13); 
//     display(vec4);
//     cout<<vec4.size();

// }
// }