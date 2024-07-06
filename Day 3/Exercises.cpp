#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Reverse a number
    int n, reverse = 0;
    cin >> n;
    while (n > 0)
    {
        int ld = n % 10;
        reverse = reverse * 10 + ld;
        n = n / 10;
    }
    cout << reverse << endl;

    // Armstrong number
    int n1, sum = 0, count = 0;
    cin >> n1;
    int original = n1;
    while (n1 > 0)
    {
        count += 1;
        n1 /= 10;
    }
    while (n1 > 0)
    {
        int ld = n1 % 10;
        sum += pow(ld, count);
        n1 = n1 / 10;
    }

    // Check if the number is Armstrong
    if (sum == n1)
    {
        cout << original << " is an Armstrong number." << endl;
    }
    else
    {
        cout << original << " is not an Armstrong number." << endl;
    }

    // factorial

    int n2;
    cin >> n2;
    int fac = 1;
    while (n2 > 0)
    {
        fac *= n2;
        n2 -= 1;
    }
    cout << fac << endl;

    // fibonacci series
    int n3;
    cin >> n3;

    count = 3;
    if (n3 == 1)
    {
        cout << "0";
    }
    else if (n3 == 2)
    {
        cout << "0, 1";
    }
    else
    {
        int a = 0, b = 1;
        cout << a << " " << b << " ";

        while (count <= n3)
        {
            int new_value = a + b;
            cout << new_value << " ";
            a = b;
            b = new_value;
            count++;
        }
    }

    return 0;
}