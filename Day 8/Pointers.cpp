#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void increment(int *a)
{
    *a += 1;
}
int main()
{
    int a = 10;
    int *p = &a;

    cout << "Address of a: " << p << endl;
    cout << "Value of a: " << *p << endl; // dereferencing
    // p++;
    // cout << "Address with 4 value added: " << p << endl; // 4 bcz int is of 4 bytes

    // pointer to pointer
    cout << "Pointer to pointer." << endl;
    int **q = &p;

    cout << "Address of p: " << q << endl;
    cout << "Address of a: " << *q << endl;
    cout << "Value of a: " << **q << endl;

    // pointers and arrays
    cout << "Pointers and arrays." << endl;
    int arr[4] = {0, 1, 2, 3};
    int *ptr = arr;
    for (int i = 0; i < 4; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }

    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << *(arr + i) << " ";
    }

    cout << endl;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<*arr<<" ";
    //     arr++; //illegal
    // }
    int c = 9, b = 8;
    cout << c << " " << b << endl;

    swap(&c, &b);
    cout << c << " " << b << endl;

    increment(&c);
    cout << c << endl;
    return 0;
}