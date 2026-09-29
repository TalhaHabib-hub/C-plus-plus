#include <iostream>
#include <string>
#include <utility>
#include <tuple>
using namespace std;
int main()
{
   pair<string, int> p = {"Ali", 90};
  cout << p.first << " scored " << p.second << endl;
   pair<int, int> a = make_pair(4, 4);
   pair<int, int> b = {3, 7};
  cout << (a < b) << endl;
  tuple<string, int, double> t = {"Sara", 20, 3.8};
  cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;
}