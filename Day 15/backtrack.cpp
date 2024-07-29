#include <iostream>
using namespace std;

// rat in a maze

// to check if this move is safe or not
bool isSafe(int n, int x, int y, int **arr)
{
    // x and y must not be greate than n and 1 means no blockage
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

// to keep track of the path if it exists
bool path(int **arr, int n, int x, int y, int **soln)
{
    // if the move is safe
    if (isSafe(n, x, y, arr))
    {
        soln[x][y] = 1;
        // move to right
        if (path(arr, n, x + 1, y, soln))
        {
            return true;
        }
        // move downwards
        if (path(arr, n, x, y + 1, soln))
        {
            return true;
        }
        //backtrack if both the moves are not safe
        soln[x][y] = 0; // backtrack
        return false;
    }
    return false;
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int **soln = new int *[n];
    for (int i = 0; i < n; i++)
    {
        soln[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            soln[i][j] = 0;
        }
    }
    if(path(arr,n,0,0,soln)){
        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<soln[i][j]<<" ";
        }
        cout<<endl;
    }

    }

    return 0;
}