#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
    if (n == 1)
    {
        return 1;
    }
    bool sortedArray = isSorted(arr + 1, n - 1);
    return (sortedArray && arr[0] < arr[1]);
}

// numbers till n
// Incrementing Order
void Inc(int n)
{
    if (n == 1)
    {
        cout << n << " ";
        return;
    }
    Inc(n - 1);
    cout << n << " ";
}

// Decrementing Order
void Dec(int n)
{
    if (n == 1)
    {
        return;
    }
    cout << n << " ";
    Dec(n - 1);
}

int firstOccurrence(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        cout<<i<<" ";
        return -1;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return firstOccurrence(arr, n, i +1, key);
}
int lastOccurrence(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    int lastocr = lastOccurrence(arr, n, i + 1, key);
    if (lastocr != -1)
    {
        return lastocr;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}
int main()
{
    int arr1[7] = {4, 2, 1, 2, 5, 2, 7};
    cout << firstOccurrence(arr1, 7, 0, 2) << endl;
    cout << lastOccurrence(arr1, 7, 0, 2) << endl;

    return 0;
}