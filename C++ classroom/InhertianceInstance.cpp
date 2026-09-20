/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
using namespace std;

class Item
{
    protected:
        string title;
 
    public:
        Item(string t) : title(t) {}
        virtual void describe()
        {
            cout << "Item: " << title << endl;
        }
        virtual ~Item() {}
};
 
class Book : public Item
{
    private:
        string author;
 
    public:
        Book(string t, string a) : Item(t), author(a) {}
 
        void describe() override
        {
            cout << "Book: " << title << " by " << author << endl;
        }
};
 
int main()
{
    Item *library[2];
    library[0] = new Item("Generic Folder");
    library[1] = new Book("The Alchemist", "Paulo Coelho");
 
    for (int i = 0; i < 2; i++)
        library[i]->describe();
 
    for (int i = 0; i < 2; i++)
        delete library[i];
}
// Output:
// Item: Generic Folder
// Book: The Alchemist by Paulo Coelho