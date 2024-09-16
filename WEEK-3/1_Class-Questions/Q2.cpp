/*
Input a number n and print the below pattern.
let, n = 5

  *****
   *****
    *****
     *****
      *****
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int space_count = i - 1;

        for (int k = 1; k <= space_count; k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}