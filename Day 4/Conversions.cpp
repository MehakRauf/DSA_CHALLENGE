#include <iostream>
using namespace std;

int binaryToDecimal(int num)
{
    int decimal = 0;
    int base = 1; // 2^0
    while (num > 0)
    {
        int lastdigit = num % 10;
        decimal += base * lastdigit;
        base *= 2;
        num = num / 10;
    }
    return decimal;
}

int octalToDecimal(int num)
{
    int decimal = 0;
    int base = 1; // 8^0
    while (num > 0)
    {
        int lastdigit = num % 10;
        decimal += base * lastdigit;
        base *= 8;
        num = num / 10;
    }
    return decimal;
}

int hexaToDecimal(string num)
{
    int base = 1; // 16^0
    int decimal = 0;
    int s = num.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (num[i] >= '0' && num[i] <= '9')
        {
            decimal += base * (num[i] - '0');
        }
        else if (num[i] >= 'A' && num[i] <= 'F')
        {
            decimal += base * (num[i] - 'A' + 10);
        }
        base *= 16;
    }
    return decimal;
}

int decimalToBinary(int num)
{
    int quotient = num;
    int remainder[50];
    int i = 0;
    while (quotient != 0)
    {
        remainder[i] = quotient % 2;
        quotient = quotient / 2;
        i++;
    }
    cout << "Binary equivalent: ";

    for (int j = i - 1; j >= 0; j--)
    {
        cout << remainder[j];
    }
    cout << endl;
}

int decimalToOctal(int num)
{
    int quotient = num;
    int remainder[50];
    int i = 0;
    while (quotient != 0)
    {
        remainder[i] = quotient % 8;
        quotient = quotient / 8;
        i++;
    }
    cout << "Binary equivalent: ";

    for (int j = i - 1; j >= 0; j--)
    {
        cout << remainder[j];
    }
    cout << endl;
}

void decimalToHexa(int num)
{
    int quotient = num;
    char remainder[50];
    int i = 0;

    while (quotient != 0)
    {
        int rem = quotient % 16;

        // Convert remainder to hexadecimal character
        if (rem < 10)
        {
            remainder[i] = rem + '0'; // Convert to character '0'-'9'
        }
        else
        {
            remainder[i] = rem - 10 + 'A'; // Convert to character 'A'-'F'
        }

        quotient = quotient / 16;
        i++;
    }

    cout << "Hexadecimal equivalent: ";

    // Print the hexadecimal number in reverse order
    for (int j = i - 1; j >= 0; j--)
    {
        cout << remainder[j];
    }

    cout << endl;
}
int main()
{
    int binaryNumber;
    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    int decimalNumber = binaryToDecimal(binaryNumber);

    cout << "Decimal equivalent: " << decimalNumber << endl;

    int octalNumber;
    cout << "Enter an octal number: ";
    cin >> octalNumber;
    decimalNumber = octalToDecimal(octalNumber);

    cout << "Decimal equivalent: " << decimalNumber << endl;

    string hexaDecimalNumber;
    cout << "Enter a hexa decimal number: ";
    cin >> hexaDecimalNumber;
    decimalNumber = hexaToDecimal(hexaDecimalNumber);

    cout << "Decimal equivalent: " << decimalNumber << endl;

    int DecimalNumber;
    cout << "Enter a decimal number: ";
    cin >> DecimalNumber;
    decimalToBinary(DecimalNumber);

    cout << "Enter a decimal number: ";
    cin >> DecimalNumber;
    decimalToOctal(DecimalNumber);

    cout << "Enter a decimal number: ";
    cin >> DecimalNumber;
    decimalToHexa(DecimalNumber);

    return 0;
}
