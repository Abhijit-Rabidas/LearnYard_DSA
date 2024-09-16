// C++ program to print Equilateral triangle (Pyramid) star pattern
/*
   let, n = 5

    *
   ***
  *****
 *******
*********

*/

// print 1 in odd columns and 0 in odd
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        /* Print leading spaces */
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }

        /* Print star */
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}