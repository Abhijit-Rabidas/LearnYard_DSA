// C++ program to find sum of lower triangular matrix
/*
Input

Input elements in matrix:
1 0 0
4 5 0
7 8 9
Output

Sum of lower triangular matrix = 19
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; // size of matrix
    cout << "Size of Matrix: ";
    cin >> n;

    int array[n][n];

    /* Input elements in matrix from user */
    cout << "Enter elements in matrix of size " << n << "*" << n << ": \n";
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cin >> array[row][col];
        }
    }

    /* Find sum of lower triangular matrix */
    int sum = 0;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (col < row)
            {
                sum += array[row][col];
            }
        }
    }

    cout << "Sum of lower triangular matrix = " << sum;

    return 0;
}