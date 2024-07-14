#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sum(n - 1);
}

int numbersDecreasing(int n)
{
    if (n == 0)
    {
        return 0;
    }
    cout << n << " ";
    return numbersDecreasing(n - 1);
}

void numberIncreasing(int n)
{
    if (n == 0)
    {
        return;
    }
    numberIncreasing(n - 1);
    cout << n << " ";
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int fibonnaci(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    return fibonnaci(n - 1) + fibonnaci(n - 2);
}
int main()
{
    cout << sum(5) << endl;
    numbersDecreasing(5);
    cout << endl;
    numberIncreasing(5);
    cout << endl;
    cout << factorial(4) << endl;
    cout << fibonnaci(4) << endl;
    return 0;
}