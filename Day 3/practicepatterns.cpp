#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    // Print Hollow Diamond Inscribed in a Rectangle
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (k == 1 || k == 2 * i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        for (int j = 1; j <= (n - i); j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (k == 1 || k == 2 * i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        for (int j = 1; j <= (n - i); j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    // Print Hollow Diamond using Stars
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (k == 1 || k == 2 * i - 1)
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
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (k == 1 || k == 2 * i - 1)
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
    // Print Hollow Rhombus
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= n; k++)
        {
            if (k == 1 || k == n || i == 1 || i == n)
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
    // Print Solid Butterfly Pattern

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= 2 * (n - i); k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= 2 * (n - i); k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // Print Hollow Butterfly Pattern
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        for (int k = 1; k <= 2 * (n - i); k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
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
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        for (int k = 1; k <= 2 * (n - i); k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
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
    // Print Pascal's Triangle
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            if (i == 0 || j == 0)
            {
                num = 1;
            }
            else
            {
                num = num * (i - j + 1) / (j);
            }
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}