#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1, num2;
    char op;
    char choice;

    do {
        cout << "\n========== FULL CALCULATOR ==========\n";
        cout << "Operators: \n";
        cout << "+  Addition\n";
        cout << "-  Subtraction\n";
        cout << "*  Multiplication\n";
        cout << "/  Division\n";
        cout << "%  Modulus (remainder)\n";
        cout << "^  Power (x^y)\n";
        cout << "s  Square root (sqrt)\n";
        cout << "l  Log (log10)\n";
        cout << "n  Natural log (ln)\n";
        cout << "S  Sine (sin)\n";
        cout << "C  Cosine (cos)\n";
        cout << "T  Tangent (tan)\n";
        cout << "f  Factorial\n";
        cout << "======================================\n";

        cout << "Enter operator: ";
        cin >> op;

        if (op == 's' || op == 'l' || op == 'n' || op == 'S' || op == 'C' || op == 'T' || op == 'f') {
            cout << "Enter number: ";
            cin >> num1;
        } else {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }

        switch (op) {
            case '+':
                cout << "Result = " << num1 + num2;
                break;
            case '-':
                cout << "Result = " << num1 - num2;
                break;
            case '*':
                cout << "Result = " << num1 * num2;
                break;
            case '/':
                if (num2 != 0)
                    cout << "Result = " << num1 / num2;
                else
                    cout << "Error! Division by zero";
                break;
            case '%':
                cout << "Result = " << fmod(num1, num2);
                break;
            case '^':
                cout << "Result = " << pow(num1, num2);
                break;
            case 's':
                if (num1 >= 0)
                    cout << "Result = " << sqrt(num1);
                else
                    cout << "Error! Negative number";
                break;
            case 'l':
                if (num1 > 0)
                    cout << "Result = " << log10(num1);
                else
                    cout << "Error! Invalid input";
                break;
            case 'n':
                if (num1 > 0)
                    cout << "Result = " << log(num1);
                else
                    cout << "Error! Invalid input";
                break;
            case 'S':
                cout << "Result = " << sin(num1 * 3.14159 / 180); // in degrees
                break;
            case 'C':
                cout << "Result = " << cos(num1 * 3.14159 / 180);
                break;
            case 'T':
                cout << "Result = " << tan(num1 * 3.14159 / 180);
                break;
            case 'f': {
                long long fact = 1;
                if (num1 < 0) {
                    cout << "Error! Factorial of negative number";
                } else {
                    for (int i = 1; i <= num1; i++) fact *= i;
                    cout << "Result = " << fact;
                }
                break;
            }
            default:
                cout << "Invalid Operator!";
        }

        cout << "\n\nDo you want to continue? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Calculator Closed!";
    return 0;
}