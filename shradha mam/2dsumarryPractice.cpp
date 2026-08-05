/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// for summing two arrays (2D)
//  #include <iostream>
//  using namespace std;

// int main()
// {
//     int A[2][2] = {2, 4, 6, 7};
//     int B[2][2] = {3, 5, 1, 6};
//     int Sumed[2][2];
//     //this one is printing the first array in the form of an matrix
//     for (int r = 0; r < 2; r++)
//     {
//         for (int c = 0; c < 2; c++)
//         {
//             cout << A[r][c] << "  ";
//         }
//         cout << endl;
//     }
//      //this one is printing the Second array in the form of an matrix
//     cout << endl;
//     for (int r = 0; r < 2; r++)
//     {
//         for (int c = 0; c < 2; c++)
//         {
//             cout << B[r][c] << "  ";
//         }
//         cout << endl;
//     }
//     // this one is summing the two arrays and assinging the values to the respective addresses
//     for (int r = 0; r < 2; r++)
//     {
//         for (int c = 0; c < 2; c++)
//         {
//             Sumed[r][c] = A[r][c] + B[r][c];
//         }
//     }
//      //this one is printing summed array in the form of an matrix
//     cout << "The sum of the above two matrix is" << endl;
//     for (int r = 0; r < 2; r++)
//     {
//         for (int c = 0; c < 2; c++)
//         {
//             cout << Sumed[r][c] << "  ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// for multiplying two arrays in wrong way
// #include <iostream>
// using namespace std;

// int main()
// {
//     int A[3][2] = {{2, 4},
//                    {6, 7},
//                    {8, 9}};

//     int B[2][3] = {{3, 5, 1},
//                    {6, 2, 4}};
//     int product[2][2];
//     // this one is printing the first array in the form of an matrix
//     for (int r = 0; r < 3; r++)
//     {
//         for (int c = 0; c < 2; c++)
//         {
//             cout << A[r][c] << "  ";
//         }
//         cout << endl;
//     }
//     // this one is printing the Second array in the form of an matrix
//     cout << endl;
//     for (int r = 0; r < 2; r++)
//     {
//         for (int c = 0; c < 3; c++)
//         {
//             cout << B[r][c] << "  ";
//         }
//         cout << endl;
//     }
//     // this one is finding product the two arrays and assinging the values to the respective addresses
//     for (int r = 0; r < 2; r++)
//     {
//         for (int c = 0; c < 3; c++)
//         {
//             product[r][c] = A[r][c] * B[c][r];
//         }
//     }
//     // this one is printing product array in the form of an matrix
//     cout << "The product of the above two matrix is" << endl;
//     for (int r = 0; r < 2; r++)// i Know that if the two matrix are multiplying the final order of the product matrix will be row(the colomns of first matrix) and coloms(the colomns of the second matrix)
//     {
//         for (int c = 0; c < 3; c++)
//         {
//             cout << product[r][c] << "  ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
// in righy way
#include <iostream>
using namespace std;

int main()
{
    int rowsA, colsA, rowsB, colsB;

    // Input matrix A dimensions
    cout << "Enter rows and columns for matrix A: ";
    cin >> rowsA >> colsA;

    // Input matrix B dimensions
    cout << "Enter rows and columns for matrix B: ";
    cin >> rowsB >> colsB;

    // Check if multiplication is possible
    if (colsA != rowsB)
    {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }

    // Define matrices
    int A[rowsA][colsA], B[rowsB][colsB], C[rowsA][colsB];

    // Input matrix A
    cout << "Enter elements of matrix A:" << endl;
    for (int i = 0; i < rowsA; i++)
        for (int j = 0; j < colsA; j++)
            cin >> A[i][j];

    // Input matrix B
    cout << "Enter elements of matrix B:" << endl;
    for (int i = 0; i < rowsB; i++)
        for (int j = 0; j < colsB; j++)
            cin >> B[i][j];

    cout << " matrix A:" << endl;
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsA; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }

    cout << " matrix B:" << endl;
    for (int i = 0; i < rowsB; i++)
    {
        for (int j = 0; j < colsB; j++)
            cout << B[i][j] << " ";
        cout << endl;
    }

    // Multiply matrices the main things:(this one is written by ai but you also written it)
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < colsA; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
    // Output result
    cout << "Resultant matrix C:" << endl;
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsB; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
