// C++ program to find sum of upper triangular matrix
/*
Input

Input matrix elements:
1 2 3
0 5 6
0 0 9
Output

Sum of upper triangular matrix = 11
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


    /* Find sum of upper triangular matrix */
    int sum = 0;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (col > row)
            {
                sum += array[row][col];
            }
        }
    }

    cout << "Sum of upper triangular matrix = " << sum;

    return 0;
}