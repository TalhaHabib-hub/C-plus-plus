// std::set stores unique elements in sorted order.

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>
using namespace std;
int main()
{
  cout << "Set below\n";
  set<int> s{5, 2, 5, 1, 2};
  for (int x : s)
    cout << x << " ";
  // differenting form map,vector and  list
  cout << "\nVector below..!\n";

  vector<int> v{5, 2, 5, 1, 2};
  for (int x : v)
    cout << x << " ";
  cout << "\nMap used below..!\n" ;

  map<string, int> m{{"Alice", 3}, {"Bob", 2}, {"Talha", 8}, {"Charlie", 12}, {"Clain", 9}};
  for (const auto &entry : m)
    cout << entry.first << " : " << entry.second << endl;
 
  cout << "\nlist is used below...!" << endl;
  list<int> l{5, 2, 5, 1, 2};
    for (int x : l)
      cout << x << " " << endl
    ;
}