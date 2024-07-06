#include <iostream>
using namespace std;

int main()
{
    //Decimal to Binary
    int n;
    int rem[50]; // Array to store remainders
    cout << "Enter the number: ";
    cin >> n;
    int count = 0;
    int quotient = n;

    // Conversion loop
    while (quotient != 0)
    {
        rem[count] = quotient % 2; // Store the remainder
        quotient = quotient / 2;   // Update quotient
        count++;
    }

    cout << "Binary representation: ";
    for (int i = count - 1; i >= 0; i--)
    {
        cout << rem[i];
    }
    cout << endl;
    return 0;
}
