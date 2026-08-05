/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// the main thing you know here is what is this override and i saw that even without it the code was running also talha the auto key word seems good
#include<iostream>
using namespace std;
class Shape {
public:
    virtual void draw() { cout << "Drawing shape" << endl; }
};

class Circle : public Shape {
public:
    void draw() override { cout << "Drawing circle" << endl; }
};
class Rectangle : public Shape {
public:
    void draw() override { cout << "Drawing rectangle" << endl; }
};

int main() {
    Shape* shapes[] = { new Circle(), new Rectangle() };
    // for (auto s : shapes)
    //     s->draw();  // Calls correct version for each type

shapes[0]->draw();
shapes[1]->draw();
}

