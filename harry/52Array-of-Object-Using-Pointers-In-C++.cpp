// /*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// #include <iostream>
// using namespace std;

// class ShopItem
// {
//     int id, counting;
//     float price;

// public:
//     void setData(int a, float b, int c)
//     {
//         id = a, price = b, counting = c;
//     }
//     void getData(void)
//     {
//         cout << "ID    [item-> " << counting + 1 << "] " << id << endl;
//         cout << "Price [item-> " << counting + 1 << "] " << price << endl;
//     }
// };
// int main()
// {
//     int size;
//     cout << "Hey! Talha How Many Object You Want: " << endl;
//     cin >> size;
//     // int  *ptr = new int [size];
//     ShopItem *ptr = new ShopItem[size];
//     // general store item
//     // veggies item
//     // hardware item
//     // ptr->setData(45,76);
//     // ptr->getData();  // -> this one is taking two much so i can use for loop
//     int idl;
//     float prl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << "Id    (item: " << i + 1 << ")\t";
//         cin >> idl;
//         cout << "price (item: " << i + 1 << ")\t";
//         cin >> prl;

//         (ptr + i)->setData(idl, prl, i);

//         cout << endl;
//     }
//     for (int i = 0; i < size; i++)
//     {
//         (ptr + i)->getData();
//         cout << endl;
//     }

//     return 0;
// }
// the exact above code without comments
#include <iostream>
using namespace std;

class ShopItem
{
    int id, counting;
    float price;

public:
    void setData(int a, float b, int c)
    {
        id = a, price = b, counting = c;
    }
    void getData(void)
    {
        cout << "ID    [item-> " << counting + 1 << "] " << id << endl;
        cout << "Price [item-> " << counting + 1 << "] " << price << endl;
    }
};
int main()
{
    int size;
    cout << "Hey! Talha How Many Object You Want: " << endl;
    cin >> size;
    ShopItem *ptr = new ShopItem[size];
    int idl;
    float prl;
    for (int i = 0; i < size; i++)
    {
        cout << "Id    (item: " << i + 1 << ")\t";
        cin >> idl;
        cout << "price (item: " << i + 1 << ")\t";
        cin >> prl;

        (ptr + i)->setData(idl, prl, i);

        cout << endl;
    }
    cout<<"So, Sir Talha we have made "<<size<<" objects for you as follow:"<<endl;
    for (int i = 0; i < size; i++)
    {
        (ptr + i)->getData();
        cout << endl;
    }

    return 0;
}
// Here we have learned how can we iterate objects using pointer, and we also had made array of objects and we did iterate them, so in the next we will see what is this pointer