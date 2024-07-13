#include <iostream>
using namespace std;

void primeList(int n)
{
    int prime[n + 1] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i < n; i++)
    {
        if (prime[i] == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

void primeFactors(int n)
{
    int spf[n + 1] = {0};
    for (int i = 2; i <= n; i++)
    {
        spf[i] = i;
    }
    for (int i = 2; i <= n; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (spf[j] == j)
                {
                    spf[j] = i;
                }
            }
        }
    }
    cout << "The prime factors are: " << endl;
    while (n != 1)
    {
        cout << spf[n] << " ";
        n = n / spf[n];
    }
}

void primeListRange(int n, int m)
{
    int prime[m + 1] = {0}; // Array to track prime numbers

    for (int i = 2; i <= m; i++) // Loop through potential primes up to sqrt(m)
    {
        if (prime[i] == 0) // i is prime
        {
            for (int j = i * i; j <= m; j += i)
            {
                prime[j] = 1;
            }
        }
    }

    for (int i = n; i <= m; i++)
    {
        if (prime[i] == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    primeList(10);
    primeListRange(10, 15);
    primeFactors(10);
    return 0;
}