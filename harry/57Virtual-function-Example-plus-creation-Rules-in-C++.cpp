/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
using namespace std;
#include<cstring>

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH( string s, float r){
          title = s;
          rating =r; 
        }
        virtual void display(){cout<<"aoooo!"<<endl;} //without the making this function virtual here the other will not even executed i did that and like the previous experiences only this function was being called the pointers are of this class when they were pointing other class object now as i wrote  virtual the pointers of this class which are pointing other objects know they will point to the function of the class to which they were pointing
};

class CWHVideo: public CWH{
    float videoLength;
    // these are inherited
    //protected:
    //  string title;
    //  float rating;
    // public:
    //  CWH( string s, float r){
    //       title = s;
    //       rating =r; 
    //     }
    //     virtual void display(){}
    public:
        CWHVideo(string s, float r, float vl): CWH(s, r){
             videoLength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title  "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length fo this video is: "<<videoLength<<" minutes"<<endl;
        }
};

class CWHText: public CWH{
    int words;
    // these are inherited
    //protected:
    //  string title;
    //  float rating;
    // public:
    //  CWH( string s, float r){
    //       title = s;
    //       rating =r; 
    //     }
    //     virtual void display(){}
    public:
        CWHText(string s , float r, float vl): CWH(s, r){
             words = vl;
        }
        // if i comment this, below funtion call will not generate the error and the function in the base class will be run
        void display(){
            cout<<"This is an amazing Text with title  "<<title<<endl;
            cout<<"Rating of this text tutorial is : "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length fo this TEXT is: "<<words<<" words"<<endl;            
        }
};
int main(){
    string title;
    float rating, vlen;
    int words;

    // for code with harry video
    title = "Django tutorial";
    rating = 4.89;
    vlen = 4.46;
    CWHVideo djVideo(title, rating, vlen);
    // djVideo.display() ; // here we run this method directly know i will run it with pointer
    // CWH * ptr = &djVideo;
    // ptr->display();
    
    // for code with harry text
    title = "Django tutorial Text";
    rating = 4.39;//vl will copy it
    words = 9234;
    CWHText djText(title, rating, words);
    // djtext.display() ; // here we run this method directly know i will run it with pointer
    // CWH * ptr2 = &djText;
    // ptr2->display();
    CWH* tut[2];
    tut[0]=&djText;
    tut[1]=&djVideo;
    tut[0]->display();
    cout<<"------------------------"<<endl;
    tut[1]->display();

    
    return 0;
}
// Rules for virtual functions
// 1. they cannot be static
// 2. They are accessed by object pointers
// 3. virtual functions can be a friend of another class
// 4. A virtual function in base class might not be used
// 5. If a virtual function is defined in a base class, there is no necessaity of redefining it in the derived class