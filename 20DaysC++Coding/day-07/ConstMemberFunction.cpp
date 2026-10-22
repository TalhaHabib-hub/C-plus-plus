#include <iostream>
using namespace std;
class Book {
    string title;
public:
    Book(string t) : title(t) {}
    string getTitle() const { return title; }
};
int main() {
    const Book b("C++");
    cout << b.getTitle();
}