// we can create a domain-specific exception by deriving from std::exception or a standard exception class.

#include <iostream>
#include <stdexcept>
using namespace std;
class InsufficientFunds : public runtime_error
{
public:
  InsufficientFunds(): runtime_error("Insufficient funds") {}
};
int main()
{
  try
  {
    throw InsufficientFunds();
  }
  catch (const exception &e)
  {
    cout << e.what();
  }
}