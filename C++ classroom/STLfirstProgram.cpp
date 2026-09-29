#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (){
  vector<int> v = {5, 2, 9, 1, 7};
  // one line to sort!
  // sort(v.begin(), v.end());    
  // for (int x : v)
  //   cout << x << " ";
  // cout << endl;
  // sir did this today 
  vector <int> ::iterator t;
  for (t = v.begin(); t != v.end();t++){
    cout << *t << " ";
  }
}