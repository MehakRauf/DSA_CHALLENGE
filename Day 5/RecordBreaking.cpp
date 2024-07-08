#include <iostream>
using namespace std;

int recordBreakingArray(int arr[], int n)
{
    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }

    int mx = -1;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx && arr[i] > arr[i + 1])
        {
            ans += 1;
        }
        mx = max(mx, arr[i]);
    }
    cout << "The number of elements in the array is: " << ans << endl;
}
int main()
{
    int n;
    cout << "Enter the length if the array: " << endl;
    cin >> n;
    int arr[n + 1];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    arr[n] = -1;

    recordBreakingArray(arr, n + 1);
}