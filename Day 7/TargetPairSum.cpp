#include <iostream>
using namespace std;

void pairSum(int arr[], int n, int k)
{
    int low = 0;
    int upper = n - 1;
    while (low < upper)
    {
        if (arr[low] + arr[upper] == k)
        {
            cout << low << " " << upper << endl;
            return;
        }
        else if (arr[low] + arr[upper] < k)
        {
            low++;
        }
        else
        {
            upper--;
        }
    }
    return;
}
int main()
{
    int n, k;
    cout << "Enter the number of elements: " << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the target sum: " << endl;
    cin >> k;
    pairSum(arr, n, k);
    return 0;
}