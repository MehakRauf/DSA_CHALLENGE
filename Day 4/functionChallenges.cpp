#include <iostream>
using namespace std;

// sum of n natural numbers
// by using formual n(n+1)/2

int sum(int n)
{
    int sumOfnNaturalNumbers = (n * (n + 1)) / 2;
    return sumOfnNaturalNumbers;
}

bool isPythagorianTriplet(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }
    if (a * a == (b * b + c * c))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    // sum Of n Natural Numbers
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    cout << "The sum is: " << sum(n);

    // check pythagorian triplet formual:  a ^ 2 == (b ^ 2 + c ^ 2)
    int x, y, z;
    cout << "Enter the values of x, y and z: " << endl;
    cin >> x >> y >> z;
    if (isPythagorianTriplet(x, y, z))
    {
        cout << "It is a pythagorian triplet" << endl;
    }
    else
    {
        cout << "It is not a pythagorian triplet" << endl;
    }
    return 0;
}