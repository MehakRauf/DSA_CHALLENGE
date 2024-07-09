#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    const int N = 1e6 + 2;
    int idxarr[N];
    for (int i = 0; i < N; i++)
    {
        idxarr[i] = -1;
    }

    int minVal = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (idxarr[arr[i]] != -1)
        {
            minVal = min(minVal, idxarr[arr[i]]);
        }
        else
        {
            idxarr[arr[i]] = i;
        }
    }

    if (minVal == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minVal + 1 << endl; // Output the minimum index (adjusted by +1 since indices are 0-based)
    }
    return 0;
}
