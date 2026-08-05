/*
C++ : File I/O [Reading and writing to a File]
        <fstream> header file
-> 3 useful classes
    1> fstreambase
    2>  ifstream -> Derived from 1
    3>  ofstream -> Derived from 1

-> Read Operation
    ifstream inka("this.txt"); 
    string st;
    inka>>st; //just like  cin
    
-> Write Operation
    ofstream outka("this.txt"); 
    string str =" Hi! Talha these are part of the game";
    outka>>st; //just like  cout , writes to the file

*/
/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // connecting our file with hout stream
    ofstream hout("sample60.txt");

    // Creating a name string and filling it with the string entered by the user
    cout<<"Enter your name: ";
    string name;
    cin>>name;

    // Writing a string to the file
    hout<<"My name is " + name;

    hout.close(); // if i commented this on the content was missing like the things below were executing but the content was showing empty, what i think is maybe the file gets saved when we close it but this also seems not true talha because it was not even showing the previous content, may be if you don't close the file and then how can i command to open the file again if it is already open but for writing

    ifstream hin("sample60.txt");
    string content;
    // getline(hin, content); // to get the full contentr int file line
    hin>>content;
    cout<<"The content of this file is: "<<content;
    return 0;
}