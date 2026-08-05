/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include <iostream>
#include <math.h>
using namespace std;
/*
Create 2 classes:
    1. SimpleCalculator-> Takes input of 2 numbers using a utility function and performs +,-,*,/ and dislplays the results using another function.
    2. ScientificCalculator-> Takes input of 2 numbers using utility function and performs any four scientific operation of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritence are you using? --> multiple inheritence
    Q2. Which mode ot Inheritence are you using? --> publically
    Q3. Create an object of HybridCalcualtor and display results of simple and scientific calculator.
    Q4. How is code is reuseability implemented
    */
   // i didn't take input though the question ask me to do that, Talha go to the end of this program sir has done the answer in his demand
class simple_Calculator
{
protected:
    int a, b;

public:
    void add(int, int);
    void subtract(int, int);
    void multiply(int, int);
    void divide(int, int);
    void reminder(int, int);

    void A_result(void)
    {
        cout << "The sum is:" << a + b << endl;
    }
    void S_result(void)
    {
        cout << "The difference is:" << a - b << endl;
    }
    void M_result(void)
    {
        cout << "The product is:" << a * b << endl;
    }
    void D_result(void)
    {
        cout << "The division is:" << a / b << endl;
    }
    void R_result(void)
    {
        cout << "The reminder is:" << a % b << endl;
    }
};
void simple_Calculator ::add(int i, int j)
{
    a = i;
    b = j;
}
void simple_Calculator ::subtract(int i, int j)
{
    a = i;
    b = j;
}
void simple_Calculator ::multiply(int i, int j)
{
    a = i;
    b = j;
}
void simple_Calculator ::divide(int i, int j)
{
    a = i;
    b = j;
}
void simple_Calculator ::reminder(int i, int j)
{
    a = i;
    b = j;
}
// 2nd class ->ScientificCalculator
class ScientificCalculator
{
protected:
    int c, d;

public:
    void square(int);
    void squareroot(int);
    void In_percentage(int, int);
    void cube(int);

    void sqr_result(void)
    {
        cout << "The square is:" << c * c << endl;
    }
    void squreroot_result(void)
    {
        cout << "The square root is:" << sqrt(c) << endl;
    }
    void percentage_result(void)
    {
        cout << "The percentage is:" << c * 100 / d << endl;
    }
    void cube_result(void)
    {
        cout << "The cube is:" << c * c * c << endl;
    }
};
void ScientificCalculator ::square(int i)
{
    c = i;
}
void ScientificCalculator ::squareroot(int i)
{
    c = i;
}
void ScientificCalculator ::In_percentage(int i, int j)
{
    c = i;
    d = j;
}
void ScientificCalculator ::cube(int i)
{
    c = i;
}

class HybridCalculator : public simple_Calculator, public ScientificCalculator
{
};
int main()
{
    // simple_Calculator s1;
    // s1.add(6,7);
    // s1.A_result();

    // ScientificCalculator r1;
    // r1.cube(8);
    // r1.cube_result();
    HybridCalculator h1;
    h1.add(3, 6);
    h1.A_result();
    h1.subtract(8, 2);
    h1.S_result();
    h1.In_percentage(503, 600);
    h1.percentage_result();
    h1.cube(45);
    h1.cube_result();

    return 0;
}

// // sir solution to this above problem
// /*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
// #include <iostream>
// #include <cmath>
// using namespace std;
// class simpleCalculator
// {
// protected:
//     float a, b;

// public:
//     void getSimpleData()
//     {
//         cout << "What is the value of a: " << endl;
//         cin >> a;
//         cout << "What is the value of b: " << endl;
//         cin >> b;
//     }
//     void ShowSimpleCalculation(void)
//     {
//         cout << "The sum of " << a << " and " << b << " is :" << a + b << endl;
//         cout << "The difference of " << a << " and " << b << " is :" << a - b << endl;
//         cout << "The product of " << a << " and " << b << " is :" << a * b << endl;
//         cout << "The division of " << a << " and " << b << " is :" << float(a / b) << endl;
//     }
// };
// class scientificCalculator
// {
// protected:
//     int a;

// public:
//     void getScientificData()
//     {
//         cout << "What is the value of a: " << endl;
//         cin >> a;
//     }
//     void showScientificCalculation(void)
//     {
//         cout << "The sine of " << a << " is " << sin(a) << endl;
//         cout << "The cosine of " << a << " is " << cos(a) << endl;
//         cout << "The tangent of " << a << " is " << tan(a) << endl;
//         cout << "The squareroot of " << a << " is " << sqrt(a) << endl;
//     }
// };
// class hybridCalculator : public simpleCalculator, public scientificCalculator
// {
// };

// int main()
// {
//     hybridCalculator calc1;
//     calc1.getScientificData();
//     calc1.showScientificCalculation();
//     calc1.getSimpleData();
//     calc1.ShowSimpleCalculation();
//     return 0;
// }
