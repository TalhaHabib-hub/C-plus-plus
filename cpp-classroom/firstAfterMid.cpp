#include<iostream>
using namespace std;
class Publication
{
    string title;
    float price;
public:
    void getData() {
        cout << "Enter title: ";
        cin>>title;
        cout << "Enter price: ";
        cin >> price;
       
    }
    void putData() {
        cout << "Title: " << title << ", Price: $" << price << endl;
    }
};
class Sales
{
    float sales[3];
    public:
    void getData() {
        cout << "Enter sales for 3 months: ";
        for (int i = 0; i < 3; i++) {
            cin >> sales[i];
        }
    }
    void putData() {
        cout << "Sales for 3 months: ";
        for (int i = 0; i < 3; i++) {
            cout << sales[i] << " ";
        }
        cout << endl;
    }

};
class Book : public Publication, public Sales
{
    int pageCount;
    public:
    void getData() {
        Publication::getData(); // from Publication
        Sales::getData(); // from Sales
        cout << "Enter page count: ";
        cin >> pageCount;
    }
    void putData() {
        Publication::putData(); // from Publication
        Sales::putData(); // from Sales
        cout << "Page count: " << pageCount << endl;
    }

};
class Tape : public Publication, public Sales
{
    float playTime;
    public:
    void getData() {
        Publication::getData(); // from Publication
        Sales::getData(); // from Sales
        cout << "Enter play time (in minutes): ";
        cin >> playTime;
    }
    void putData() {
        Publication::putData(); // from Publication
        Sales::putData(); // from Sales
        cout << "Play time: " << playTime << " minutes" << endl;
    }

};
int main()
{
   Book b;
   Tape t;
   b.getData();
   t.getData();
   cout<< "\nBook Details:\n";
   b.putData();
   cout<< "\nTape Details:\n";
   t.putData();
}