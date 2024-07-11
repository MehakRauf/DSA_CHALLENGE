#include <iostream>
using namespace std;

void isPalindrome(char arr[], int n)
{
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "Is a palindrome." << endl;
    }
    else
    {
        cout << "Not a palindrome." << endl;
    }
}

void longestString(char arr[], int n)
{
    int length = 0, maxlen = 0;
    int i = 0;
    int st = 0, end = 0;
    while (true)
    {
        if (arr[i] == '\0' || arr[i] == ' ')
        {
            if (length > maxlen)
            {
                maxlen = length;
                end = st;
            }
            st = i + 1;
            length = 0;
        }
        else
        {
            length++;
        }
        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }
    for (i = 0; i < maxlen; i++)
    {
        cout << arr[i + end];
    }
    cout << " is the longest word with the length of " << maxlen << " characters." << endl;
}

int main()
{
    int n;
    cout << "Enter the number of characters: ";
    cin >> n;
    cin.ignore(); // To clear the input buffer

    char arr[n + 1];
    cout << "Enter the string: ";
    cin.getline(arr, n + 1); // Read the entire line, including spaces

    longestString(arr, n);

    return 0;
}