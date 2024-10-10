// C++ program to subtract two matrices

/*
Input
Input elements in 3x3 matrix1:
1 2 3
4 5 6
7 8 9
Input elements in 3x3 matrix2:
9 8 7
6 5 4
3 2 1

Output
Difference of both matrices =
-8 -6 -4
-2  0  2
4  6  8
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Order of matrix: ";
    cin >> n;

    int A[n][n]; // Matrix 1
    int B[n][n]; // Matrix 2
    int C[n][n]; // Resultant matrix

    /* Input elements in first matrix*/
    cout << "Enter elements in matrix A of size " << n << "*" << n << ": \n";
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cin >> A[row][col];
        }
    }

    /* Input elements in second matrix */
    cout << "\nEnter elements in matrix B of size 3x3: \n";
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cin >> B[row][col];
        }
    }

    /*
     * Subtract both matrices A and B entry wise or element wise
     * and stores result in matrix C
     */
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            /* Cij = Aij + Bij */
            C[row][col] = A[row][col] - B[row][col];
        }
    }

    /* Print the value of resultant matrix C */
    cout << "\nSum of matrices A+B = \n";
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cout << C[row][col] << " ";
        }
        cout << endl;
    }
    return 0;
}