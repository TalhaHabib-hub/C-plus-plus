/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
using namespace std;

//a code sample from the notes
// class ClassName {
//     // Access specifier (public, private, protected)
//     public:
//     // Data members
//     int attribute1;
//     string attribute2;

//     // Member functions
//     void method1();
//     int method2(int param);
// };
// int main(){
        
//      return 0;
//     }


//// i think talha the issue you may have here is what is  the heap  it is using pointers and at the end it is deleting the pointing object.
// class Point {
// public:
//     double x, y;
//     void display() {
//         cout << "(" << x << ", " << y << ")" << endl;
//     }
// };

// int main() {
//     // Stack allocation — automatic memory management
//     Point p1;
//     p1.x = 3.0;
//     p1.y = 4.0;
//     p1.display();  // (3, 4)

//     // Heap allocation — manual memory management
//     Point* p2 = new Point();
//     p2->x = 1.0;   // Arrow operator for pointer access
//     p2->y = 2.0;
//     p2->display(); // (1, 2)
//     delete p2;     // Must free heap memory!

//     return 0;
// }

// here now it is giving the example of public protected and private

// class Employee {
// private:
//     double salary;        // Cannot be accessed from outside
//     int employeeID;

// protected:
//     string department;    // Accessible by derived classes

// public:
//     string name;          // Freely accessible
//     string Postion;
//     string getPosition(string p);

//     void setSalary(double s) { // this is the inline function 
//         if (s > 0) salary = s;   // Controlled access
//     }
//     void getEmployeeId(int i) {
//         employeeID = i;   // Controlled access
//     }
    
//     double getSalary() { return salary; }  // Getter
//     int getID() { return employeeID; }  // Getter
// };

// string Employee ::getPosition(string p){ // this one is the outof line function// of type string of the class employee :: and it is a function this one with parameter 
//     Postion = p;
// }
// class Manager : public Employee {
// public:
//     void setDepartment(string d) {
//         department = d;   // OK — protected is accessible
//         // salary = 5000; // ERROR — private not accessible
//     }
//     void getAll(){
//         cout<<"Name        :"<<name<<endl;
//         cout<<"ID          :"<<getID()<<endl;
//         cout<<"Department  :"<<department<<endl;
//         cout<<"Positon     :"<<Postion<<endl;
//         cout<<"Salary      :"<<getSalary()<<endl;

//     }
// };

// int main (){
//     Manager* m1 = new Manager();
//     m1->setSalary(200000);
//     m1->setDepartment("Software Engineering");
//     m1->getEmployeeId(1000);
//     m1->name = "Shakeel Ahmed";
//     m1->getPosition("HOD");

// m1->getAll();// Talha the  question you should ask from yourself is although you had private and protected members too but you got all of those then what is the true benefit of it I think it will be useful if we don't use the internal functions member functions.


//     return 0;
// }

// now here we gonna study the this pointer
class Counter {
private:
    int count;

public:
    Counter(int count) {
        this->count = count;  // 'this->count' is member, 'count' is parameter
    }

    Counter &increment() {
        count++;
        return *this;  // Return reference to current object
    }

    void display() { cout << "Count: " << count << endl; }
};

int main() {
    Counter c(0);
    c.increment().increment().increment();  // Method chaining
    c.display();  // Count: 3
    Counter c1(9);
    c1.increment().increment();
    c1.display();  // Count: 11
}
