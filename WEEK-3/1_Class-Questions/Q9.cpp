// program to print the below X pattern

/*
1       1
 2     2
  3   3
   4 4
    5
   4 4
  3   3
 2     2
1       1

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // First part of the pattern
    for (int i = 1; i <= n; i++)
    {
        // Print trailing spaces
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }

        cout << i;

        // Print central spacces
        for (int j = 1; j <= ((n - i) * 2 - 1); j++)
        {
            cout << " ";
        }

        // Don't print for last row
        if (i != n)
        {
            cout << i;
        }

        // Moves on to the next row
        cout << endl;
    }

    // Second part of the pattern
    for (int i = n - 1; i >= 1; i--)
    {
        // Print trailing spaces
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }

        cout << i;

        // Print central spaces
        for (int j = 1; j <= ((n - i) * 2 - 1); j++)
        {
            cout << " ";
        }

        cout << i;

        // Move on to the next line
        cout << endl;
    }

    return 0;
}