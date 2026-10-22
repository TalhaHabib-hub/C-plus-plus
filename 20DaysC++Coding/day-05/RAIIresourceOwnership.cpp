#include <iostream>
using namespace std;
class Resource
{
public:
  Resource() { cout << "Acquire\n"; }
  ~Resource() { cout << "Release\n"; }
};
int main()
{
  {
    Resource r;
  } // destructor runs here
}