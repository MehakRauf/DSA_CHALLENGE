#include <iostream>
using namespace std;

int main() {
    int n, m, l;
    cout << "Enter the number of rows and columns for matrix 1: ";
    cin >> n >> m;

    cout << "Enter the number of rows and columns for matrix 2: ";
    cin >> m >> l;

    int arr[n][m];
    int arr2[m][l];

    // input the first array
    cout << "Enter the first array values:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    // input the second array
    cout << "Enter the second array values:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < l; j++) {
            cin >> arr2[i][j];
        }
    }

    // print the first array
    cout << "The first array is:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // print the second array
    cout << "The second array is:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < l; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    // matrix multiplication
    int ans[n][l];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            ans[i][j] = 0;
            for (int k = 0; k < m; k++) {
                ans[i][j] += arr[i][k] * arr2[k][j];
            }
        }
    }

    // print the resulting matrix
    cout << "The resulting matrix (matrix multiplication) is:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
