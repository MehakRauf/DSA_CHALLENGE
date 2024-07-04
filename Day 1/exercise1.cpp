#include <iostream>
using namespace std;

int main()
{
    // find the max from three numbers using if-else
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "The maximum number is: " << a;
        }
        else
        {
            cout << "The maximum number is: " << c;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "The maximum number is: " << b;
        }
        else
        {
            cout << "The maximum number is: " << c;
        }
    }
    // identify if the number is odd or even using if-else

    int d;
    cin >> d;
    if (d % 2 == 0)
    {
        cout << "The given number is even" << endl;
    }
    else
    {
        cout << "The given number is odd" << endl;
    }
}