// Program to print the below pattern
/*

    *****
   *   *
  *   *
 *   *
*****

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; // n = rows
    cin >> n;

    int spaces = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = i; k <= spaces; k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= n; j++)
        {
            if ((i > 1 && i < n) && (j > 1 && j < n))
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}

/*
alternate
 #include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; // n = rows
    cin >> n;

    int spaces = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = i; k <= spaces; k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

*/

