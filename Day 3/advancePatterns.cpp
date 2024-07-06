#include <iostream>
using namespace std;

int main()
{
    // inverted pattern
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // 0-1 pattern
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << " 1 ";
            }
            else
            {
                cout << " 0 ";
            }
        }
        cout << endl;
    }

    // rhombus pattern
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= n; k++)
        {
            cout << " *";
        }
        cout << endl;
    }
    // number pattern triangle
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k << " ";
        }
        cout << endl;
    }
    // palindromic number pattern
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout << k;
        }
        for (int k = 2; k <= i; k++)
        {
            cout << k;
        }
        cout << endl;
    }

    // star pattern
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout << "*";
        }
        for (int k = 2; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout << "*";
        }
        for (int k = 2; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // zigzag pattern
    int n1;
    cout << "Enter the value: " << endl;
    cin >> n1;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n1; j++)
        {
            if (((i + j) % 4 == 0) || (i == 2 && (j % 4 == 0)))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}