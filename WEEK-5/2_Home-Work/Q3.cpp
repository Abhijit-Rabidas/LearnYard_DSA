// C++ program to check whether the matrix is a lower triangular matrix or not

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

    /* Check whether the matrix is lower triangular matrix */
    int isLower = 1;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            /*
             * If elements above main diagonal(col>row)
             * is not equal to zero(array[row][col]!=0)
             */
            if (col > row && array[row][col] != 0)
            {
                isLower = 0;
            }
        }
    }

    /*
     * If matrix is lower triangular matrix
     */
    if (isLower == 1)
    {
        cout << "\nMatrix is Lower triangular matrix: \n";

        /* Print elements of lower triangular matrix */
        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < n; col++)
            {
                cout << array[row][col] << " ";
            }

            cout << endl;
        }
    }
    else
    {
        cout << "\nMatrix is not a Lower triangular matrix";
    }

    return 0;
}