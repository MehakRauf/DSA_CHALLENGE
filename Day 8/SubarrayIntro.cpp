#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of rows and columns: ";
    cin >> n >> m;

    int arr[n][m];
    // input the array
    cout << "Enter the array values: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // print the array
    cout << "The array is: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }

    // search in array
    int toSearch;
    bool flag = false;
    cout << "Enter the number to Search: ";
    cin >> toSearch;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == toSearch)
            {
                flag = true;
                cout << i << " " << j << endl;
            }
        }
    }
    if (flag)
    {
        cout << "Element is found." << endl;
    }
    else
    {
        cout << "Element is not found." << endl;
    }

    // spiral print of the array
    int row_start = 0, row_end = n - 1, col_start = 0, col_end = m - 1;
    while (row_start <= row_end && col_start <= col_end)
    {
        // row start
        for (int col = col_start; col <= col_end; col++)
        {
            cout << arr[row_start][col] << " ";
        }
        row_start++;

        // column end
        for (int row = row_start; row <= row_end; row++)
        {
            cout << arr[row][col_end] << " ";
        }
        col_end--;

        // row end
        for (int col = col_end; col >= col_start; col--)
        {
            cout << arr[row_end][col] << " ";
        }
        row_end--;

        // for column start
        for (int row = row_end; row >= row_start; row--)
        {
            cout << arr[row][col_start] << " ";
        }
        col_start++;
    }
    return 0;
}