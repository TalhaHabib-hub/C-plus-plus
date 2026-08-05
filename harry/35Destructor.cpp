// // Destructor in C++
// // look Talha if you want the if any of your objects gets distroyes while run time , you will want to free the space( the space/the dynamic memmory you had allocated to that object) occupies , for that purpose we use Destructors
// /*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// #include<iostream>
// using namespace std;

// // Destructor never takes an argument not does it return any value
// int count = 0;
// class num{
//     public:
//         num(){
//             count++;
//             cout<<"This is a time when constructor is called for object number  "
//             <<count<<endl;
//         }
//         //also for making destructor we will use the name of the class. the difference between this and constructor will be that we will write here the exact name of the class but with a tilled symbol '~'.
//         ~num(){// jesay object destruct ho yani memory free karaga to ya line print kardo
//             cout<<"This is the time when destructor is called for object number "
//             <<count<<endl;
//             count--;
//         }

// };
// int main(){
//     cout<<"We are inside our main function "<<endl;
//     cout<<"Creating first object n1"<<endl;
//     num n1;
//     { // inside block we write those things when the block ends all the things inside that will be destroyed
//         cout<<"Entering this block"<<endl;
//         cout <<"Creating two more objects "<<endl;
//         num n2, n3;
//         cout<<"Exiting this block"<<endl;
//     }// after this end brace the n2 and n3 will be destroyed , not the n1 becuse its scope is in main and will be destroyed when the main function ends // destructor mean dear Talha when the compiler find that something is of no more use compiler will destroyed that as the n2 and n3 are useless outside their scope that is why due to the presence of destructor the useless thing (after use) will be destroyed

//     cout<<"Back to main"<<endl;

//     return 0;
// }//dakhan talha jee cheez simple ha constructor us waqt call hoga jub object bana ga and jab compiler ko Pata chala object ki zarurat nahi ha to compiler destructor ko call daga

// // it is advice from sir you can study related to other things

// although the program is important with comment here is still the above code without comments

/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include <iostream>
using namespace std;

int count = 0;
class num
{
public:
    int x;
    num()
    {
        count++;
        cout << "This is a time when constructor is called for object number  "
             << count << endl;
    }

    ~num()
    {
        cout << "This is the time when destructor is called for object number "
             << count << endl;
        count--;
    }
    void display(){
        cout<<x<<endl;
    }
};
int main()
{
    cout << "We are inside our main function " << endl;
    cout << "Creating first object n1" << endl;
    num n1;
    
        cout << "Entering this block" << endl;
        cout << "Creating two more objects " << endl;
        num n2, n3;
      cout << "Exiting this block" << endl;
    

    cout << "Back to main" << endl;
    n1.x = 4;
    // n2.x = 5;
    // n3.x = 9;

    return 0;
}
