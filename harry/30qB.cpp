/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// #include<iostream>
// using namespace std;

// class Point{
//   int x  , y;
//   public:
//      Point(int a, int b){
//           x = a;
//           y = b;
//             }
//      void displayPoint(){
//       cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
//      }
// };

// int main(){
//     Point p(1,6);
//     p.displayPoint();

//     Point p2(8,9);
//     p2.displayPoint();
//   return 0;
// }
// Create a function (make it a friend function) which takes 2 points objects and computes the distance between those points root((x2 - x1)2 + (y2 - y1)2)

/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include <iostream>
#include <math.h>
using namespace std;

class disfinder
{
  int a, b;
  friend int theDis(disfinder re, disfinder ui);

public:
  void takevalue(int x, int y)
  {
    a = x;
    b = y;
  }
};
int theDis(disfinder re, disfinder ui)
{
  int dis = (sqrt(pow(re.a - ui.a, 2) + pow(re.b - ui.b, 2)));
  return dis;
}
int main()
{
  disfinder p1, p2;
  p1.takevalue(3, 4);
  p2.takevalue(8, 9);

  int aja;
  aja = theDis(p1, p2);
  cout << "The distance between the two points will be " << aja;
  return 0;
} // Talha sir said that if
// Distance between (1, 1) and (1, 1) is 0;
// Distance between (0, 1) and (1, 6) is 5;
// Distance between (1, 0) and (70, 0) is 69;