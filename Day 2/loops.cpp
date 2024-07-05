#include <iostream>
using namespace std;

int main()
{
    // Program to find sum of natural numbers till n.
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "The sum is : " << sum << endl;

    // Program to display multiplication table upto 10.
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;
    int count = 1;
    while (count <= 10)
    {
        cout << num << " * " << count << " = " << num * count << endl;
        count += 1;
    }

    // Program to add only positive numbers.
    int number;
    cout << "Enter the number: " << endl;
    cin >> number;
    sum = 0;
    while (number >= 0)
    {
        sum += number;
        cout << "Enter a number: " << endl;
        cin >> number;
    }
    cout << "The sum is: " << sum;
    return 0;
}