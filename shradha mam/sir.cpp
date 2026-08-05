/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include <iostream>
using namespace std;

int main()
{
    int rA, rB, cA, cB;

    cout << "Rows and Colomns of 1st Matrix : " << endl;
    cin >> rA >> cA;
    cout << "Rows and Colomns of 2nd Matrix : " << endl;
    cin >> rB >> cB;
    if (cA != rB)
    {
        cout << "The Product is not possible: ('cols of 1st and rows of 2nd Matrix must be equal')" << endl;
        return 0;
    }
    int A[rA][cA], B[rB][cB], AB[rA][cB];
    cout << "Put the element of 1st Matrix :( order " << rA << "-by-" << cA << " )" << endl;
    for (int r = 0; r < rA; r++)
    {
        for (int c = 0; c < cA; c++)
        {
            cin >> A[r][c];
        }
    }
    cout << "Put the element of 2nd Matrix :( order " << rB << "-by-" << cB << " )" << endl;
    for (int r = 0; r < rB; r++)
    {
        for (int c = 0; c < cB; c++)
        {
            cin >> B[r][c];
        }
    }

    cout << "1st Matrix:(order " << rA << "-by-" << cA << " )" << endl;
    for (int r = 0; r < rA; r++)
    {
        for (int c = 0; c < cA; c++)
        {
            cout << A[r][c] << "  ";
        }
        cout << endl;
    }

    cout << "2nd Matrix:(order " << rB << "-by-" << cB << " )" << endl;
    for (int r = 0; r < rB; r++)
    {
        for (int c = 0; c < cB; c++)
        {
            cout << B[r][c] << "  ";
        }
        cout << endl;
    }

    // this is the main for loop that will do the multiplication of the the matrices
    for (int r = 0; r < rA; r++)
    {
        for (int c = 0; c < cB; c++)
        {
            AB[r][c] = 0;
            for (int arc = 0; arc < cA; arc++)
            {
                AB[r][c] += A[r][arc] * B[arc][c];
            }
        }
    }

    cout << "Product:( order " << rA << "-by-" << cB << " )" << endl;
    for (int r = 0; r < rA; r++)
    {
        for (int c = 0; c < cB; c++)
        {
            cout << AB[r][c] << "  ";
        }
        cout << endl;
    }

    return 0;
}