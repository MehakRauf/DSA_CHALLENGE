#include <iostream>
using namespace std;

int main()
{
    //Write a program to print all prime numbers in a given range
    int a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    int i;
    for (i = a; i <= b; i++)
    {
        int j;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j == i)
        {
            cout << "This number is prime" << i << endl;
        }
    }

    // Write a program to print all odd numbers till n.
    int n;
    cout << "Enter the number : " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << " , ";
    }

    // Write a program to check if a given number is prime or not.
    int num;
    cout << "Enter the number to check: " << endl;
    cin >> num;
    int j;
    for ( j = 2; j < num; j++)
    {
        if (num % j == 0)
        {
            cout << "The given number is not prime" << endl;
            break;
        }
    }
    if (j == num)
    {
        cout << "The given number is prime" << endl;
    }
    return 0;
}