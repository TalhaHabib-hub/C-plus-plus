//  /*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
//  #include<iostream>
//  using namespace std;
// // class Car
// // {
// //     public:
// //         string brand;
// //         Car(string b) { brand = b;
// //         cout<<"a class is made"<<endl;}
// //         Car( Car &habib)          // copy constructor
// //         {
// //             brand = habib.brand;
// //             cout << "Copy made!" << endl;
// //         }
// // };
// class Point
// {
//     public:
//         int x, y;
//         Point(int a, int b) { x = a; y = b; }

//         Point operator+(const Point &other)     // overload the + operator
//         {
//             Point result(x + other.x, y + other.y);
//             return result;
//         }
// };

// int main()
// {
//     // Car c1("Toyota");
//     // Car c2 = c1;         // copy constructor runs -> prints "Copy made!"
//     // cout<<c2.brand<<endl;
//     // Car c3(c1);           // this ALSO calls the copy constructor

//     Point p1(1, 2), p2(3, 4);
//     Point p3 = p1 + p2;      // calls operator+  ->  p3 = (4, 6)
// }

#include <iostream>
using namespace std;

class Shape // abstract base class (Abstraction)
{
protected:
    string name; // protected - visible to derived classes

public:
    Shape(string n) : name(n) {} // constructor
    virtual double area() = 0;   // pure virtual (Abstraction/Polymorphism)
    virtual ~Shape() {}          // virtual destructor - important!

    void describe() // shared, inherited by everyone
    {
        cout << name << " has area " << area() << endl;
    }
};

class Rectangle : public Shape // Inheritance (public)
{
private:
    double width, height; // encapsulated - private data // name also here

public:
    Rectangle(double w, double h) : Shape("Rectangle"), width(w), height(h) {}

    // these all are also here
    // Shape(string n) : name(n) {} // constructor of base will be called first then base
    // virtual double area() = 0;   // pure virtual (Abstraction/Polymorphism) //f this will be overrided by function at line 76
    // virtual ~Shape() {}          // virtual destructor - important! // will be destrut after the base destruction

    // void describe() // shared, inherited by everyone
    // {
    //     cout << name << " has area " << area() << endl;
    // }
    double area() override // Overriding (Polymorphism)
    {
        return width * height;
    }
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : Shape("Circle"), radius(r) {}
 // these also all here
    // Shape(string n) : name(n) {} // constructor of base will be called first then base
    // virtual double area() = 0;   // pure virtual (Abstraction/Polymorphism) //f this will be overrided by function at line 76
    // virtual ~Shape() {}          // virtual destructor - important! // will be destrut after the base destruction

    // void describe() // shared, inherited by everyone
    // {
    //     cout << name << " has area " << area() << endl;
    // }
    double area() override
    {
        return 3.14159 * radius * radius;
    }
};

int main()
{
    Shape *shapes[2];
    shapes[0] = new Rectangle(4, 5);
    shapes[1] = new Circle(3);

    for (int i = 0; i < 2; i++)
        shapes[i]->describe(); // each object correctly reports its OWN area

    for (int i = 0; i < 2; i++)
        delete shapes[i]; // virtual destructor -> correct cleanup

    return 0;
}
// Output:
// Rectangle has area 20
// Circle has area 28.2743