/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
using namespace std;

class Father{
    protected:
        string name;
        float age;
    public:
        Father(string n, float j){
            name = n;
            age = j;
        }
        virtual void display(){
            cout<<"Oooo!"<<endl;
        }       
};
class Son : public Father{
    // protected:
       string proffession;
    public:
    Son(string n, float a, string z): Father(n,a){
        proffession = z;
        
    }
    void display(){
        cout<<"The name of son is "<<name<<endl;
        cout<<"The age of "<<name<<" is "<<age<<endl;
        cout<<"The proffession of "<<name<<" is "<<proffession<<endl;
    }
};
class Daughter : public Father{
    protected:
       string University;
    public:
    Daughter(string n, float a,string z): Father(n,a){
        University = z;
      
    }
    void display(){
        cout<<"The name of Daughter is "<<name<<endl;
        cout<<"The age of "<<name<<" is "<<age<<endl;
        cout<<"The University of "<<name<<" is "<<University<<endl;
    }
};
int main(){
    Son s1("Talha",21,"CS");
    Daughter d1("Ayesha",15,"Islamic");
    // s1.display();
    // d1.display();
    // Father*ptr = new [2];// I was doing this and it was showing error
    Father* ptr[2];
    ptr[0] =&s1;
    ptr[1] =&d1;
    ptr[0]->display();
    cout<<endl;
    ptr[1]->display();
   // so the purpose of it was that if we made pointer of base class and when we point other derived class objects by them (C++ allows us to do this) but what happens then is when you try access the function of those object's class, the pointer will only gets access to the function which were in their type class,(which are in these object's class), but now on one side we are wanting to point the objects of derived class with the pointers of base but the pointer gets access to only their function, if we want the pointer should call the function of the object's class which they are pointing then we simply have to write virtual before the function which is inherited and everything will work properly

    
    return 0;
}

// // my project I don't but it's incomplete
// /*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// #include<iostream>
// using namespace std;

// class Father{
//     protected:
//         string name;
//         float age;
//     public:
//         Father(string n, float j){
//             name = n;
//             age = j;
//         }
//         virtual void display(){
//             cout<<"Oooo!"<<endl;
//         }       
// };
// class Son : public Father{
//     // protected:
//        string proffession;
//     public:
//     Son(string n, float a, string z): Father(n,a){
//         proffession = z;
        
//     }
//     void display(){
//         cout<<"The name of son is "<<name<<endl;
//         cout<<"The age of "<<name<<" is "<<age<<endl;
//         cout<<"The proffession of "<<name<<" is "<<proffession<<endl;
//     }
// };
// class Daughter : public Father{
//     protected:
//        string University;
//     public:
//     Daughter(string n, float a,string z): Father(n,a){
//         University = z;
      
//     }
//     void display(){
//         cout<<"The name of Daughter is "<<name<<endl;
//         cout<<"The age of "<<name<<" is "<<age<<endl;
//         cout<<"The University of "<<name<<" is "<<University<<endl;
//     }
// };
// int main(){
//     string name, uni,proff;
//     float age;
//     int siblings,daugt,son;
//     cout<<"How Many Siblings do You Have:"<<endl;
//     cin>>siblings;
//     cout<<"Daughters: ";cin>>daugt;
//     cout<<"Son: ";cin>>son;

//     Father* arr[siblings];
//     cout<<"Son Portion: "<<endl;
//     Son* arri = new Son[son];

//     for (int i = 0; i < son; i++)
//     {cout<<"Name       : ";cin>>name;
//      cout<<"age        : ";cin>>age;
//      cout<<"Proffession: ";cin>>proff;
//        arri[i]=Son(name,age,proff);
//     }
    


    
//     return 0;
// }