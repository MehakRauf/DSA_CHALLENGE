#include <iostream>
#include <climits>
using namespace std;

void maxTilln(int arr[], int n)
{
    int maxNo = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, arr[i]);
        cout << maxNo << " ";
    }
    cout << endl;
}

void sumOfsubArrays(int arr[], int n)
{
    int sum;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
        }
        cout << "The sum of " << i + 1 << " subarray is: ";
        cout << sum << endl;
    }
}

void longestArithmeticSubArray(int arr[], int n)
{
    int length = 2;
    int answer = length;
    int j = 2;
    int previous_difference = arr[1] - arr[0];

    while (j < n)
    {
        if (previous_difference == arr[j] - arr[j - 1])
        {
            length++;
        }
        else
        {
            previous_difference = arr[j] - arr[j - 1];
            length = 2;
        }
        answer = max(answer, length);
        j++;
    }
    cout << "The longest arithmetic subarray's length is: " << answer << endl;
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

    longestArithmeticSubArray(arr, n);
    return 0;
}