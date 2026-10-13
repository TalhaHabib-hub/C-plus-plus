// For a library system, likely classes include Book, Member, and Library. Their responsibilities should be separated.

#include <iostream>
using namespace std;
class Book {
public:
    string title;
    Book(string t) : title(t) {}
};
class Member {
public:
    string name;
    Member(string n) : name(n) {}
};
int main() {
    Book b("C++");
    Member m("Ali");
    cout << m.name << " borrowed " << b.title;
}
    