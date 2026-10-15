#include<iostream>
using namespace std;
class CompileTime {
  private:
    int a;
    int b;
  public:
    CompileTime(int x, int y) : a(x), b(y) {}
    int getSum() {
      return a + b;
    }
  ~CompileTime(){
    cout<<"Destructor called for CompileTime object with a="<<a<<" and b="<<b<<endl;
   delete this;
   }
};
int main() {
  // CompileTime ct(5, 10);
  // CompileTime*ptr=new CompileTime(5, 10);
  CompileTime *ptr;
  ptr = new CompileTime(5, 10);
  cout << "Sum: " <<(*ptr).getSum() << endl;


  // CompileTime ct(5, 10);
  // cout << "Sum: " << ct.getSum() << endl;
  // return 0;
}