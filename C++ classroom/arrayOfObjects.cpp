#include<iostream>
using namespace std;
class Book
{
  string title;
  int price;
  public:
    void setData(string t, int p)
    {
      title = t;
      price = p;
    }
    void display()
    {
      cout << "Title: " << title << ", Price: " << price << endl;
    }
};
int main()
{

  string title;
  int price;
  Book obj[3];
  for (int i = 0; i < 3;i++)
  {
    cout << "Enter Data: ";
    cin>>title;
    cin>>price;
    obj[i].setData(title, price);
  }
  for (int i = 0;i<3;i++){
    obj[i].display();
  }
}