//program covering single, multilevel, multiple, hierarchical, and hybrid inheritance
//Fazal Hayat
#include <iostream>
#include <string>
using namespace std;
// 1. SINGLE INHERITANCE  (one base -> one derived)
class Animal {
protected:
    string name;
public:
    Animal(string n) : name(n) {}
    void eat() { cout << name << " is eating.\n"; }
};
class Dog : public Animal {
public:
    Dog(string n) : Animal(n) {}
    void bark() { cout << name << " says Woof!\n"; }
};


// 2. MULTILEVEL INHERITANCE  (A -> B -> C)
class Vehicle {
public:
    void start() { cout << "Vehicle started.\n"; }
};

class Car : public Vehicle {
public:
    void drive() { cout << "Car is driving.\n"; }
};

class SportsCar : public Car {
public:
    void turbo() { cout << "SportsCar turbo boost activated!\n"; }
};


// 3. MULTIPLE INHERITANCE  (many bases -> one derived)
class Camera {
public:
    void takePhoto() { cout << "Photo taken.\n"; }
};

class Phone {
public:
    void call() { cout << "Calling...\n"; }
};

class SmartPhone : public Camera, public Phone {
public:
    void browse() { cout << "Browsing the internet.\n"; }
};

// 4. HIERARCHICAL INHERITANCE  (one base -> many derived)
class Shape {
public:
    virtual double area() = 0;          // pure virtual (abstract base)
    virtual ~Shape() {}
};

class Circle : public Shape {
    double r;
public:
    Circle(double radius) : r(radius) {}
    double area() override { return 3.14159 * r * r; }
};

class Rectangle : public Shape {
    double w, h;
public:
    Rectangle(double w, double h) : w(w), h(h) {}
    double area() override { return w * h; }
};

class Triangle : public Shape {
    double b, h;
public:
    Triangle(double b, double h) : b(b), h(h) {}
    double area() override { return 0.5 * b * h; }
};
// example of hybrid inheritance (diamond problem) using virtual inheritance
class Person {
protected:
    string name;
public:
    Person(string n = "Unknown") : name(n) {}
    void introduce() { cout << "Hi, I'm " << name << ".\n"; }
};

class Student : virtual public Person {
public:
    Student(string n) : Person(n) {}
    void study() { cout << name << " is studying.\n"; }
};

class Employee : virtual public Person {
public:
    Employee(string n) : Person(n) {}
    void work() { cout << name << " is working.\n"; }
};

class TeachingAssistant : public Student, public Employee {
public:
    // The most-derived class initializes the virtual base directly
    TeachingAssistant(string n) : Person(n), Student(n), Employee(n) {}
    void assist() { cout << name << " is assisting in the lab.\n"; }
};

// 5. ACCESS SPECIFIERS IN INHERITANCE
class Base {
public:    int pub = 1;
protected: int prot = 2;
private:   int priv = 3;
};

class PublicDerived : public Base {
public:
    void show() { cout << "public inh -> pub=" << pub << ", prot=" << prot << "\n"; }
};

class ProtectedDerived : protected Base {
public:
    void show() { cout << "protected inh -> pub=" << pub << ", prot=" << prot << "\n"; }
};

class PrivateDerived : private Base {
public:
    void show() { cout << "private inh -> pub=" << pub << ", prot=" << prot << "\n"; }
};

// ============================================================
int main() {
    cout << "--- 1. Single Inheritance ---\n";
    Dog d("Buddy");
    d.eat();
    d.bark();

    cout << "\n--- 2. Multilevel Inheritance ---\n";
    SportsCar sc;
    sc.start();
    sc.drive();
    sc.turbo();

    cout << "\n--- 3. Multiple Inheritance ---\n";
    SmartPhone sp;
    sp.takePhoto();
    sp.call();
    sp.browse();

    cout << "\n--- 4. Hierarchical Inheritance ---\n";
    Shape* shapes[] = { new Circle(5), new Rectangle(4, 6), new Triangle(3, 8) };
    const char* names[] = { "Circle", "Rectangle", "Triangle" };
    for (int i = 0; i < 3; i++) {
        cout << names[i] << " area = " << shapes[i]->area() << "\n";
        delete shapes[i];
    }

    cout << "\n--- 5. Hybrid Inheritance (Diamond) ---\n";
    TeachingAssistant ta("Alice");
    ta.introduce();   // no ambiguity thanks to virtual inheritance
    ta.study();
    ta.work();
    ta.assist();

    cout << "\n--- Bonus: Access Specifiers ---\n";
    PublicDerived pd;       pd.show();
    ProtectedDerived prd;   prd.show();
    PrivateDerived pvd;     pvd.show();
    cout << "pd.pub accessible from outside: " << pd.pub << "\n";
    // prd.pub;  // ERROR: becomes protected
    // pvd.pub;  // ERROR: becomes private

    return 0;
}