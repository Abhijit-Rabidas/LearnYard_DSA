/*
Input a number n and print the below pattern.
let, n = 5

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int stars = 1, spaces = n - 1;

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int k = 1; k <= spaces; k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;

        if (i < n)
        {
            spaces--;
            stars += 2;
        }
        else
        {
            spaces++;
            stars -= 2;
        }
    }

    return 0;
}