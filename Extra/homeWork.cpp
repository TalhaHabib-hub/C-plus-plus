/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include <iostream>
using namespace std;

class publication
{
  int price;
  string name;

public:
  void getData(string object)
  {
    cout << "Name of " << object << " : ";
    cin >> name;
    cout << "price of " << object << " : ";
    cin >> price;
  }
  void putData(string obj)
  {
    cout << "Name of the " << obj << " is " << name << endl;
    cout << "Price of the " << obj << " is Rs:" << price << endl;
  }
};
class sales
{
  int april[30], may[30], june[30];
  int *all[3] = {april, may, june};

public:
  void salesTaker(string obj)
  {
    for (int i = 0; i < 3; i++)
    {
      if (i == 0)
      {
        cout << "_____________" << obj << "___April Sales_____________________" << endl;
      }
      else if (i == 1)
      {
        cout << "_____________" << obj << "___May Sales_____________________" << endl;
      }
      else
      {
        cout << "_____________" << obj << "___June Sales_____________________" << endl;
      }
      for (int j = 1; j < 31; j++)
      {
        cout << "Day: " << j << " : ";
        cin >> all[i][j];
      }
    }
  }
};
class video : public publication, public sales
{
  int length;

public:
  void getData()
  {
    publication::getData("video");
    cout << "video length: ";
    cin >> length;
  }
  void putData()
  {
    publication::putData("video");
    cout << "video length is " << length << endl;
  }
};
class Book : public publication, public sales
{
  int pages;

public:
  void getData()
  {
    publication::getData("Book");
    cout << "Book pages: ";
    cin >> pages;
  }
  void putData()
  {
    publication::putData("Book");
    cout << "Book pages are : " << pages << endl;
  }
};
int main()
{
  video v1;
  v1.getData();
  v1.putData();
  v1.salesTaker("video");
  cout << " ____________________________________________________" << endl;
  Book b1;
  b1.getData();
  b1.putData();
  b1.salesTaker("book");
  return 0;
}