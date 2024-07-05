#include <iostream>
using namespace std;

int main()
{
    // Rectangle Pattern
    int n1, n2;
    cout << "Enter both the values: " << endl;
    cin >> n1 >> n2;
    for (int i = 1; i <= n1; i++)
    {
        for (int j = 1; j <= n2; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // // Hollow Rectangle
    for (int i = 1; i <= n1; i++)
    {
        for (int j = 1; j <= n2; j++)
        {
            if (i == 1 || i == n1 || j == 1 || j == n2)
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

    // // inverted Half Pyramid
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // 180 degree rotated half pyramid
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    // half pyramid using numbers
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    // floyd's triangle
    int val = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << val;
            val++;
        }
        cout << endl;
    }

    // butterfly pattern
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int space = 2 * n - 2 * i;
        for (int k = 1; k <= space; k++)
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
        int space = 2 * n - 2 * i;
        for (int k = 1; k <= space; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}