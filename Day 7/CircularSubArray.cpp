#include <iostream>
#include <climits>
using namespace std;

// Kadane's Approach
int kadane(int arr[], int n)
{
    int sum=0;
    int maxNo = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
        maxNo = max(maxNo, sum);
    }
    return maxNo;
}
int main()
{
    int n;
    std::cout << "Enter the number of elements: " << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int wrapSum;
    int nonWrapSum;
    nonWrapSum = kadane(arr, n);
    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
        arr[i] = -arr[i];
    }
    wrapSum = totalSum + kadane(arr, n);
    cout << max(wrapSum, nonWrapSum);
    return 0;
}