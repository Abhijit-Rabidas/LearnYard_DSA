// Program to print the below pattern
/*
let, n = 5

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; // n = rows
    cin >> n;

    // Upper half pattern
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "*";
        }

        for (int j = 1; j <= (2 * i - 2); j++)
        {
            cout << " ";
        }

        for (int j = i; j <= n; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // Lower half pattern
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        for (int j = (2 * i - 2); j < (2 * n - 2); j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}