#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
  vector<int> number = {3, 4, 2, 7};
  // cout << number.size();
  number.push_back(12);
  number.push_back(18);
  number.pop_back();
  cout << number.size() << endl;
  cout << "Without sorting number vector" << endl;
  for (int i = 0; i <= number.size();i++){
    cout << number[i] <<" ";
  }
  cout << endl;
  
  sort(number.begin(), number.end());
   cout << "With sorting number vector becomes" << endl;
   for (int i = 0; i <number.size();i++){
    cout << number[i] <<" ";
  }
  cout << endl;
  reverse(number.begin(), number.end());
  cout << "With reversing number vector (reverse just reverses the vector)" << endl;
   for (int i = 0; i <number.size();i++){
    cout << number[i] <<" ";
  }
  cout << endl;
  number.clear();
  cout << number.size();
}