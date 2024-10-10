// Find sum of diagonal elements in 2D array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4][4]; // 4 x 4 Matrix

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "arr" << "[" << i << "]" << "[" << j << "]" << " = ";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    // printing diagonal 1 elements
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i][i] << " ";
    }

    cout << endl;

    // printing diagonal 2 elements
    for (int i = 0; i < 4; i++)
    {
        int j = 4 -1 -i; // i + j = n - 1;
        cout << arr[i][j] << " ";
    }

    return 0;
}