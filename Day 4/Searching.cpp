#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int toSearch)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == toSearch)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int n, int toSearch)
{
    int l = 0;
    int u = n;
    while (l <= u)
    {
        int mid = (l + u) / 2;
        if (arr[mid == toSearch])
        {
            return mid;
        }
        else if (arr[mid] < toSearch)
        {
            l = mid+1;
        }
        else
        {
            u = mid;
        }
    }
    return -1;
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

    int toSearch;
    cout << "Enter the number to search: " << endl;
    cin >> toSearch;

    int index = linearSearch(arr, n, toSearch);
    if (index == -1)
    {
        cout << "The given element is not found." << endl;
    }
    else
    {
        cout << "The given element is found at: " << index << " index." << endl;
    }
    index = binarySearch(arr, n, toSearch);
    if (index == -1)
    {
        cout << "The given element is not found." << endl;
    }
    else
    {
        cout << "The given element is found at: " << index << " index." << endl;
    }
    return 0;
}