#include <iostream>
using namespace std;

int divisibles(int n, int a, int b)
{
    int c1 = n / a;        // divided by a e.g : n=40 a=5, b=7, c1=8
    int c2 = n / b;        // divided by b c2=5;
    int c3 = n / (a * b);  // divided by a and b both c3
    return (c1 + c2 - c3); // return which are divided individually by each and subtract which are divisible y both
    // answer= 8+5-1
}

int gcd(int a, int b)
{
    int rem = 0;
    while (b != 0)
    {
        rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}
int main()
{
    cout << divisibles(40, 7, 5) << endl;
    cout << gcd(24, 42);
    return 0;
}