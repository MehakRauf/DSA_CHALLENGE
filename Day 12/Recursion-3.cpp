#include <iostream>
#include <string>
using namespace std;

// my first approach
void reverse(string str, int size, int i)
{
    if (i == size)
    {
        return;
    }
    reverse(str, size, i + 1);
    cout << str[i];
}

// my second approach
void reverseString(string str, int i)
{
    if (i == str.size())
    {
        return;
    }
    reverseString(str, i + 1);
    cout << str[i];
}

// video approach
void reverseString1(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    string ros = s.substr(1);
    reverseString1(ros);
    cout << s[0];
}

// my approach
void replacePi(string str, int i)
{
    if (i == str.length())
    {
        return;
    }

    if (str[i] == 'p' && str[i + 1] == 'i')
    {
        cout << "3.14";
    }
    else
    {
        cout << str[i + 1];
    }
    replacePi(str, i + 1);
}

// video approach to replace pi
void replacePi1(string str)
{
    if (str.length() == 0)
    {
        return;
    }
    if (str[0] == 'p' && str[1] == 'i')
    {
        cout << "3.14";
        replacePi1(str.substr(2)); // q ky do values py check kiya ha
    }
    else
    {
        cout << str[0];
        replacePi1(str.substr(1));
    }
}

// tower of hanoi
void towerOfHanoi(int n, char src, char help, char dest)
{
    if (n == 1)
    {
        cout << "Move " << n << " from " << src << " to " << dest << endl;
        return;
    }
    towerOfHanoi(n - 1, src, dest, help);
    cout << "Move " << n << " from " << src << " to " << dest << endl;
    towerOfHanoi(n - 1, help, src, dest);
}

// to remove duplicates from a string
string removeDuplicates(string str)
{
    if (str.length() == 0)
    {
        return "";
    }
    char checkChar = str[0];
    string ans = removeDuplicates(str.substr(1));
    if (checkChar == ans[0])
    {
        return ans;
    }
    return (checkChar + ans);
}

// move all x to the end
string moveAllX(string str)
{
    if (str.length() == 0)
    {
        return "";
    }
    char checkChar = str[0];
    string ans = moveAllX(str.substr(1));
    if (checkChar == 'x')
    {
        return (ans + checkChar);
    }
    return (checkChar + ans);
}

// generate all substrings
void generateSubStrings(string str, string ans)
{
    if (str.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = str[0];
    generateSubStrings(str.substr(1), ans);
    generateSubStrings(str.substr(1), ans + ch);
}

// substrings with ascii code
void subStringsASCII(string str, string ans)
{
    if (str.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = str[0];
    int ASCII = ch;
    subStringsASCII(str.substr(1), ans);
    subStringsASCII(str.substr(1), ans + ch);
    subStringsASCII(str.substr(1), ans + to_string(ASCII));
}
int main()
{
    subStringsASCII("AB", "");
    return 0;
}