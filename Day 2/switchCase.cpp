#include <iostream>
using namespace std;

int main()
{
    // Write a program to write a simple calculator.
    float n1, n2;
    cout << "Enter both of the operands: " << endl;
    cin >> n1 >> n2;

    char op;
    cout << "Enter the operator: " << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;
    case '-':
        cout << n1 - n2 << endl;
        break;
    case '*':
        cout << n1 * n2 << endl;
        break;
    case '/':
        cout << n1 / n2 << endl;
        break;

    default:
        cout << "I am still learning." << endl;
        break;
    }

    // Write a program to find whether an alphabet is a vowel or a consonant.
    char c;
    cout << "Enter the character: " << endl;
    cin >> c;

    switch (c)
    {
    case 'a':
        cout << "It is a vowel." << endl;
        break;
    case 'e':
        cout << "It is a vowel." << endl;
        break;
    case 'i':
        cout << "It is a vowel." << endl;
        break;
    case 'o':
        cout << "It is a vowel." << endl;
        break;
    case 'u':
        cout << "It is a vowel." << endl;
        break;

    default:
        cout << "It is a consonant" << endl;
        break;
    }
    return 0;
}