// Multidimensional Arrays
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //
    int arr1[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

    // Loop through the rows
    for (int i = 0; i < 4; i++)
    {
        // Loop through the columns
        for (int j = 0; j < 3; j++)
        {
            cout << arr1[i][j] << " "; // Print each element
        }
        cout << endl; // Move to the next line after each row
    }

    cout << arr1[0][0] << endl;
    cout << arr1[1][3] << endl;
    cout << arr1[2][2] << endl;

    //
    int arr2[3][2];

    arr2[0][0] = 1;
    arr2[0][1] = 2;
    arr2[1][0] = 3;
    arr2[1][1] = 4;
    arr2[2][0] = 5;
    arr2[2][1] = 6;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    
    //
    int arr[4][6];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << "arr" << "[" << i << "]" << "[" << j << "]" << " = ";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}