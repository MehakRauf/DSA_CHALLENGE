#include <iostream>
using namespace std;

int main()
{
    // Program to find maximum, minimum among two numbers.
    cout << "Enter the values one by one" << endl;
    int min, max;
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        min = b;
        max = a;
    }
    else
    {
        min = a;
        max = b;
    }
    cout << "The minimum number is: " << min << endl;
    cout << "The maximum number is: " << max << endl;

    // Program to check if a triangle is scalene, isosceles or equilateral.
    int side1, side2, side3;
    cout << "Enter the sides of traingle" << endl;
    cin >> side1 >> side2 >> side3;
    if (side1 == side2 == side3)
    {
        cout << "It is a equilateral triangle.";
    }
    else if (side1 == side2 || side1 == side3 || side2 == side3)
    {
        cout << "It is a isoceles triangle.";
    }
    else
    {
        cout << "It is a scalene triangle.";
    }

    // Program to check if an alphabet is a vowel or a consonant.
    char c;
    cout << "Enter the character: " << endl;
    cin >> c;
    int isLower, isUpper;
    isLower = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isUpper = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (isLower || isUpper)
    {
        cout << "The given character is a vowel.";
    }
    else
    {
        cout << "The given character is a consonant.";
    }
    return 0;
}