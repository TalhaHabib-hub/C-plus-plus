#include<iostream>
using namespace std;
#include<cstring>
// Abstract Base and pure class these are inter related in the abstract base their should be at least one pure virtual class
// for making an abstract class we must have atleast one virtual function of which overide we will do mustly
//Pure virtual class is use to make the abstract class, and abstract base class is a class that purpose is from which we will make new classes and work will be done on them
class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH( string s, float r){
          title = s;
          rating =r; 
        }
        // virtual void display(){}; if we do this the program will still run if for any derived class we don't have defined the display function, but for the below statment it would surely show an error, so then it becomes must for us to define this function again in them , this below fucntion is now called pure virtual function
        virtual void display()=0;//we cannot object of it // ya apka upar impose karta ha display ka naya version write karna// this will be override and it is must to ovewrite it // do-nothing function ->> pure virtual function 
        // koi asi class na banjaya jo mari redinfinition na kara // ya jo  class jis ma hum han ya bana hi is lia ha ka issa dusra class bana, iska pointerss bananga to ya pure virtual function. ya 
};
class CWHVideo: public CWH{
    float videoLength;

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

    public:
        CWHText(string s , float r, float vl): CWH(s, r){
             words = vl;
        }

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

    title = "Django tutorial";
    rating = 4.89;
    vlen = 4.46;
    CWHVideo djVideo(title, rating, vlen);

    title = "Django tutorial Text";
    rating = 4.39;//vl will copy it
    words = 9234;
    CWHText djText(title, rating, words);

    // CWH* tut=new CWH[2];-> this one is not working 
    CWH* tut[2];
    tut[0]=&djText;
    tut[1]=&djVideo;
    tut[0]->display();
    cout<<"------------------------"<<endl;
    tut[1]->display();

    
    return 0;
}