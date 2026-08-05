/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st = "Talha mara jan bhai";
    string st2;  

    ofstream talha("sample60.txt");// first with the ofstream class object (talha) get access to the file.
    talha<<st; //  the through this st into the file which talha(object has opened/ is pointing)

    ifstream inkhan("sample60b.txt");// file with the ifstream class object inkhan
    inkhan>>st2;// now put the string in inkhan (holding) to the st2 in my program i will print them in the line

    getline(inkhan, st2);// will print the first line
    getline(inkhan, st2);// will print the second line
    cout<<st2;
    
    return 0;
}
// /*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// #include<iostream>
// #include<fstream>
// // if we want to read or write any file in the C++ we should use some classes which c++ has already provided us we will get these class in the <fstream> in the header file

// /*
// The useful classes for working with files in C++ are:
// 1. fstreambase
// 2. ifstream -> derived from fstreambase
// 3. ofstream -> derived from fstreambase
// */
// // In order to work with files in C++, you will have to open it, Primarly, there are 2 ways to open a file:
// // 1.Using the constructor
// // 2.using the member funcftion open() of the class
// using namespace std;

// int main(){
//     string st = "Talha mara jan bhai";
//     string st2;
//     // Opening files using constructor and writing it
//     ofstream talha("sample60.txt"); // write operation out is an object that can be of any name to like if wrir 'talha' instead of the out the program will still run ( before talha i had wrote the name fo the object as out), the ofstream is use to write in the file while the ifstream class is use to read from a file
//     talha<<st;

//     // Opening files using constructor and reading from it
//     ifstream in("sample60b.txt"); //read operation
//     // in>>st2;
//     getline(in, st2);
//     getline(in, st2);
//     cout<<st2;
    
//     return 0;
// }