#include <iostream>
#include <cmath>
using namespace std;

// function for printing prime numbers in a given range
int isPrime(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
            else
            {
                cout << i << " ";
                break;
            }
        }
    }
    cout << endl;
    return 0;
}

int factorial(int n)
{
    int fac = 1;
    while (n > 0)
    {
        fac *= n;
        n -= 1;
    }
    return fac;
}

int nCr(int n, int r)
{
    int value = factorial(n) / ((factorial(n - r)) * factorial(r));
    cout << value;
}
int main()
{
    nCr(9,4);
    return 0;
}