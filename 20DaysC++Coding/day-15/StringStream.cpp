// std::stringstream lets you treat a string as a stream, useful for parsing textd.

// #include <iostream>
// #include <sstream>
// using namespace std;
// int main() {
//     string line = "Ali 85";
//     string name;
//     int marks;
//     stringstream ss(line);
//     ss >> name >> marks;
//     cout << name << " " << marks;
// }


#include <iostream> // For cout
#include <sstream> // For stringstream
using namespace std;

int main()
{
// A string containing both a name and marks
string line = "Ali 85";

// Variables to store extracted data
string name;
int marks;

// Create a stringstream object and load the string "Ali 85" into it
stringstream ss(line);

// Extract data from the stringstream
// First word goes into 'name'
// Second value goes into 'marks'
ss >> name >> marks;

// Display the extracted values
cout << name << " " << marks;
}