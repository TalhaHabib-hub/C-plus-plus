// /*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// // OOPs Recap
// // OOPs - Classes and objects

// // C++ --> initaially called  --> C with classses by stroustroup
// // class --> extension of structures (in C)
// // structures had limitations
// //    - members are public
// //    - No methods (functions)
// // classes --> structures + more
// // classes --> can have methods and properties(values)
// // classess --> can make few members as private & few as public
// // structures in C++ are typedefed
// // you can declare objects along with the class declration like this,dont know but why harry sir said it is not recommended
// /*   class Employee{
//        //class definition
//    } harry , rohan , lovish;    */
// // harry.salary -->> makes no sense if salary is private  because we can't set private variable directly, in this way you can also say that it prevents over writing

//            // Nesting of member function
// // if you have a function that already exist  , and that is using your private variable or it is any sort of function ,from that function you can call to some else function without putting a dot

// //Dear Talha it is a program it is written by sir harry , what this program actually does is it takes a number which actually in the program will be a string (everything is done here by function inside the class so after line 96 you will write it ) it first checks that is at binary or not if it finds a number that is not a binary the programs ends there  , if the number is binary it first shows the number after that it completely makes it opposite and then show to a screen means it make 0 a 1 and 1 a 0
// //after compliting task , i did it my one looks more easier then sir one hahhhahah

// #include <iostream>
// #include <string>
// using namespace std;

// class binary
// {
//   string s;//it is private because in the class everything is by default private

// public:
//   void read(void);//after line 82 , straight to line 38
//   void chk_bin(void);//after line 83 ,staight to line 44
//   void ones_compliment(void);//after line 85, straight to line 56
//   void display(void);//after line 84 and 86 , straighy to line 70
// };

// void binary ::read(void)//after line 32
// {
//   cout << "Enter a binary number" << endl;
//   cin >> s;
// }

// void binary ::chk_bin(void)//after line 33
// {
//   for (int i = 0; i < s.length(); i++)//whatever int is enter will be taken as string
//   {
//     if (s.at(i) != '0' && s.at(i) != '1')//this will go at each index of the string if it founded and non binary , it will be execute
//     {
//       cout << "Incorrect binary format" << endl;
//       exit(0); //this will break the whole binary class and will not allow any further calls
//     }
//   }
// }

// void binary ::ones_compliment(void)//after line 34
// {  chk_bin();//function at line 33 is called//using function inside another function is called nesting member function//it is thrown here without object it still work because chk_bin will be use for the same object for which ones_compliment is being use//here chk_bin is done automatically , and not shown to the user
//   for (int i = 0; i < s.length(); i++)
//   {
//     if (s.at(i) == '0')
//     {
//       s.at(i) = '1';
//     }
//     else//not using else if for 0 codition , because chk_bin will not allow any numbers other then 1 and 0 (if there were exit (0) will break the class and call will not reach at this function)
//     {
//       s.at(i) = '0';
//     }
//   }
// }
// void binary ::display(void)
// {
//   cout << "Displaying your binary number" << endl;
//   for (int i = 0; i < s.length(); i++)
//   {
//     cout << s.at(i);
//   }
//   // cout<<endl;
// }
// int main()
// {

//   binary b;//an object is formed
//   b.read();//the function inside the template / class is called at line 32 (public)
//   // b.chk_bin();//function at line 33 is called //also it works without it if , the check_binary is even private because function will call it over their , if we use this way to access , it will show error
//   b.display();//function at line 35 is called
//   b.ones_compliment();//function at line 34 is called
//   cout<<"\nafter complimenting "<<endl;
//   b.display();//function at line 35 is called

//   return 0;
// }

// above one is while learning this one is without comments (only one is there)
//  /*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include <iostream>
using namespace std;

class Binary
{
  string a;

public:
  void Taker(void);
  void Tester(void);
  void Oppositer(void);
  void Shower(void);
};

void Binary ::Taker(void)
{
  cout << "Please put a binary number" << endl;
  cin >> a;
}

void Binary ::Tester(void)
{
  for (int i = 0; i < a.length(); i++)
  {
    if (a.at(i) != '0' && a.at(i) != '1')
    {
      cout << "Please put only binary number";
      exit(0);
    }
  }
}

void Binary ::Oppositer(void)
{
  for (int i = 0; i < a.length(); i++)
  {
    if (a.at(i) == '0')
      a.at(i) = '1';
    else
      a.at(i) = '0';
  }
}
void Binary ::Shower(void)
{
  cout << "This is the number Talha " << endl;
  cout << a;
  cout << endl;
}

int main()
{
  Binary Tara;
  Tara.Taker();
  Tara.Tester(); // in the above harry sir program it is hidden by nesting it will work automatically without putting the object name for which it will work and dot
  Tara.Shower();
  Tara.Oppositer();
  cout << "after oppossitng" << endl;
  Tara.Shower();
  return 0;
}
