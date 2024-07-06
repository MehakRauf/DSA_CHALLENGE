#include <iostream>
using namespace std;

int main()
{
    // Write a program to display all factors of a number.
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    // Write a program to print the ASCII value of any given character.
    char c;
    cout << "Enter the character: " << endl;
    cin >> c;

    int ascii_value = c;
    cout << ascii_value << endl;
    return 0;
}