/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include <iostream>
using namespace std;
struct Student
{
    string name;
    int rollNo;
    float marks[6];
    float total;
};
int main()
{
    float adder;
    Student *ptr = new Student[3];
    for (int i = 0; i < 3; i++)
    {
        adder = 0;
        cout << "Student (" << i + 1 << ") name: ";
        cin >> (ptr + i)->name;
        cout << "Roll no of ( " << (ptr + i)->name << " ): ";
        cin >> (ptr + i)->rollNo;
        cout << "Marks: " << endl;
        for (int b = 0; b < 5; b++)
        {
            cout << (ptr + i)->name << "'s marks in subject ( " << b + 1 << " ): ";
            cin >> (ptr + b)->marks[b];
            adder += (ptr + b)->marks[b];
        }
        (ptr + i)->total = adder;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "Student : " << (ptr + i)->name << endl;
        cout << "Roll No : " << (ptr + i)->rollNo << endl;
        cout << "Total marks : " << (ptr + i)->total << "/500 " << endl;
        cout << "Total grade : " << ((ptr + i)->total) * 100 / 500 << "%" << endl;
        cout << "-----------------------------------------------" << endl;
    }

    return 0;
}