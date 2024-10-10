// Print only the upper tri-angle of the matrix

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

    // Method_1
    for (int i = 0; i < 4; i++)
    {
        for (int j = i; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    // Method_2
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j >= i)
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}