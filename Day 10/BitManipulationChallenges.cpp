#include <iostream>
using namespace std;

bool ispowerof2(int n)
{
    return (n && !(n & n - 1));
}

int numberOfOnes(int n)
{
    int count = 0;
    while (n)
    {
        n = (n & n - 1);
        count++;
    }
    return count;
}

void subsets(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    if (ispowerof2(n))
    {
        cout << "It is a power of 2." << endl;
    }
    else
    {
        cout << "Not a power of 2." << endl;
    }

    cout << numberOfOnes(n);

    int arr[4] = {1, 2, 3, 4};
    subsets(arr, 4);
    return 0;
}