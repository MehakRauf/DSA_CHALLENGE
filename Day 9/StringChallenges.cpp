#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string toUpperCase(string str)
{
    for (int i = 0; i < str.size(); i++)
    {
        str[i] -= 32;
    }
    return str;
}

string toLowerCase(string str)
{
    for (int i = 0; i < str.size(); i++)
    {
        str[i] += 32;
    }
    return str;
}

string biggestInteger(string str)
{
    sort(str.begin(), str.end(), greater<int>());
    return str;
}

void maximumCharacter(string str)
{
    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < str.size(); i++)
    {
        freq[str[i] - 'a']++;
    }

    char ans = 'a';
    int maxNo = 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxNo)
        {
            maxNo = freq[i];
            ans = i + 'a';
        }
    }

    cout << "The character is: " << ans << " with the repeating frequency of " << maxNo << endl;
}
int main()
{
    string str = "sajvdsabdkjsa";

    // making our own functions
    str = toUpperCase(str);
    cout << "The string in upper case: " << str << endl;
    str = toLowerCase(str);
    cout << "The string in lower case: " << str << endl;

    // using builtin function (transform)
    // transform(start of string, end of string, from where to start, ::function(toupper/ tolower))

    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << "The string in upper case: " << str << endl;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << "The string in lower case: " << str << endl;

    // greater integer from the string
    string s = "423432432432";
    cout << "The biggest possible integer in the string is: " << biggestInteger(s)<<endl;

    string s1 = "jbjbjkbkjoiuyurraewac";
    maximumCharacter(s1);
    return 0;
}