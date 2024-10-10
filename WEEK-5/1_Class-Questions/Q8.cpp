// C++ program to multiply two matrices

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;

    int arr1[row][col], arr2[row][col], arr3[row][col];

    cout << "Matrix_1:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "Matrix_2:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr2[i][j];
        }
    }


    for (int i = 0; i < row; i++)
    {
        for (int j = 0; i < col; j++)
        {
            int sp = 0;
            for (int k = 0; k < col; k++)
            {
                sp += arr1[i][k] * arr2[k][j];
            }
            arr3[i][j] = sp;
        }
    }

    cout << "Product of matrix:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
#include <iostream>
using namespace std;

int main() {
    int row1, col1, row2, col2;
    cout << "Enter rows and columns for first matrix: ";
    cin >> row1 >> col1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> row2 >> col2;

    // Ensure the matrices can be multiplied
    if (col1 != row2) {
        cout << "Matrix multiplication is not possible!" << endl;
        return 0;
    }

    int arr1[row1][col1], arr2[row2][col2], arr3[row1][col2] = {0};

    cout << "Matrix_1:" << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cin >> arr1[i][j];
        }
    }

    cout << "Matrix_2:" << endl;
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            cin >> arr2[i][j];
        }
    }

    // Matrix multiplication
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            for (int k = 0; k < col1; k++) {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    cout << "Product of matrix:" << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

*/