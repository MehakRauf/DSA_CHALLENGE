#include <iostream>
#include <climits>
using namespace std;

// Kadene's Approach
void maxSubarray(int arr[], int n)
{
    int sum;
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
    std::cout << "The maximum sum is: " << maxNo << endl;
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
    maxSubarray(arr, n);
    return 0;
}