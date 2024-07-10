#include <iostream>
using namespace std;

void possibleSubarrays(int arr[], int n)
{
    cout << "All of the subarrays are: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements: " << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    possibleSubarrays(arr, n);
    return 0;
}