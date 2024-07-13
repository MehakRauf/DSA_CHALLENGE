#include <iostream>
using namespace std;

int findUnique(int arr[], int n)
{
    int xor_sum = 0;
    for (int i = 0; i < n; i++)
    {
        xor_sum = xor_sum ^ arr[i];
    }
    return xor_sum;
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 1, 2, 3};
    cout << "the unique number is: " << findUnique(arr, 7);
    return 0;
}