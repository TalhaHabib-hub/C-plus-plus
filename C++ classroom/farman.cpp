#include <iostream>
using namespace std;

class Marks {
    int mark;

public:
    Marks(int m) {
        mark = m;
    }

    void whatsYourMark() {
        cout << "hey i got " << mark << " marks" << endl;
    }

    // Overloaded -> operator: returns a pointer to this object
    Marks* operator->() {
        return this;
    }
};

int main() {
    Marks anilsmark(65);

    anilsmark.whatsYourMark();   // normal call with dot
    anilsmark->whatsYourMark();  // uses the overloaded ->

    return 0;
}