#include <iostream>
#include <climits>
using namespace std;

//Brute Force Approach
void maxSubarray(int arr[], int n)
{
    int sum;
    int maxNo = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            maxNo = max(maxNo, sum);
        }
    }
    cout << "The maximum sum is: " << maxNo << endl;
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
    maxSubarray(arr, n);
    return 0;
}