//Write a C++ program to create a Temperature class with a private data member celsius. Use public functions to set the temperature, convert it to Fahrenheit, and display the result.

#include <iostream>
using namespace std;

class Temperature {
    float celsius; 
public:
    void setTemp(float c) {
        celsius = c;
    }

    float toFahrenheit() {
        return (celsius * 9.0 / 5.0) + 32;
    }

    void display() {
        cout << "Temperature in Celsius: " << celsius << " C" << endl;
        cout << "Temperature in Fahrenheit: " << toFahrenheit() << " F" << endl;
    }
};

int main() {
    Temperature t;
    float c;

    cout << "Enter temperature in Celsius: ";
    cin >> c;

    t.setTemp(c);
    t.display();

    return 0;
}