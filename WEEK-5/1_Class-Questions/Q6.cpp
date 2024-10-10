// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

// METHOD_1:
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Transpose
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i < j)
            {
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }

    // Reverse every row using two pointers
    for (int i = 0; i < 3; i++)
    {
        int left = 0;
        int right = 2; // Size of the row - 1 (3 elements, index from 0 to 2)

        // Swap elements from left to right
        while (left < right)
        {
            swap(arr[i][left], arr[i][right]);
            left++;
            right--;
        }
    }
    cout << endl;
    // Output the modified array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
// METHOD_2: Using another 2D array
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3];
    int arr1[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr1[i][j] = arr[2 - j][i];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}*/