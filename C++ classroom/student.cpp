#include <iostream>
using namespace std;
class Result
{
  int classNo;
  int subjects[7];
  string name;
  public:
    void input()
    {
      cout<<"Enter the name ";
      cin>>name;
      cout<<"Enter the class Number ";
      cin>>classNo;
      cout<<"Enter marks for your 7 subjects"<<endl;
      for(int i=0;i<7;i++)
      {
        cout<<"Subject number : "<<i+1<<" ";
        cin>>subjects[i];
      }
    }
    int totalMarks()
    {
      int total=0;
      for (int i=0;i<7;i++)
      {
        total+=subjects[i];
      }
      cout<<"The total marks are : "<< total;
    }
};
int main ()
{
  Result student1;
  student1.input();
  student1.totalMarks();
}