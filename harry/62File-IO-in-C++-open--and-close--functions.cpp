/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream outk;
    outk.open("sample60.txt");
    outk<<"This is me";
    outk<<"\nThis is me also";
    outk<<"\nThis is also me";
    outk.close();

    ifstream in;
    string st,st2,st3;
    in.open("sample60.txt");
    // in>>st>>st2>>st3;
    // cout<<st<<st2<<st3;
    while (in.eof()==0){
        getline(in, st);
        cout<<st;
        cout<<endl;
    }
    cout<<endl;
    
    in.close();
    ifstream in2;
    in2.open("sample60b.txt");
    string jan;
    while (in2.eof()==0)
    {
        getline(in2, jan);
        cout<<jan;
        cout<<endl;
    }
    
    return 0;
}