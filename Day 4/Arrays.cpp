#include <iostream>
#include <climits>
using namespace std;

// Finding Max and Min element
void minNmax(int arr[], int n)
{
    int maxNo = INT16_MIN;
    int minNo = INT16_MAX;

    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
    }
    cout << "The maximum number is: " << maxNo << endl;
    cout << "The minimum number is: " << minNo << endl;
}

// Running sum of an Array
void runningSum(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i + 1] = arr[i] + arr[i + 1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Kids with the greatest number of candies
void greatestCandies(int arr[], int extraCandies, int n)
{
    bool result[n];
    for (int i = 0; i < n; i++)
    {
        int trial = arr[i] + extraCandies;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            else if (arr[j] <= arr[i])
            {
                result[i] = true;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the length if the array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    minNmax(arr, n);
    runningSum(arr, n);

    int extraCandies;
    cout << "Enter the number of extra candies: " << endl;
    cin >> extraCandies;

    greatestCandies(arr, extraCandies, n);
    return 0;
}