#include <iostream>
#include <string>
using namespace std;

void permutations(string str, string ans)
{
    if (str.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    // adding eah element one by one
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        // adding the elements before the character and after the character
        string ros = str.substr(0, i) + str.substr(i + 1);
        // calling it for the newly created string
        permutations(ros, ans + ch);
    }
}

int countPath(int s, int e) // s -> starting point e-> ending point
{
    // means start and end are same
    if (s == e)
    {
        return 1;
    }
    // means starting point is greater then the starting point
    if (s > e)
    {
        return 0;
    }
    // initial a counter variable
    int count = 0;
    // we have six ways to go forward (1,2,3,4,5,6)
    // Current answer = countPath(s+1,e) + countPath(s+2,e) + countPath(s+3,e) +
    // countPath(s+4,e) + countPath(s+5,e) + countPath(s+6,e)
    for (int i = 1; i <= 6; i++)
    {
        count += countPath(s + i, e);
    }
    return count;
}

int countMazePath(int n, int i, int j)
{ // nxn size of maze
    // i represents rows j represents columns
    // we can move only right and downwards
    if (i == n - 1 || j == n - 1)
    {
        return 1;
    }
    if (i >= n || j >= n)
    {
        return 0;
    }

    // i+1 to move to right and j+1 to move downwards
    return countMazePath(n, i + 1, j) + countMazePath(n, i, j + 1);
}
int main()
{
    permutations("AB", "");
    cout << countPath(1, 3) << endl;
    cout << countMazePath(4, 0, 2) << endl;
    return 0;
}