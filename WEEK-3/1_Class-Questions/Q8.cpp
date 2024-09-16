/*
Input a number n and print the below pattern.
let, n = 5

      1
      12
      123
      1234
      12345
      1234
      123
      12
      1

*/

/*
// METHOD_1:
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int limit = (i <= n) ? i : 2 * n - i;

        for (int j = 1; j <= limit; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
*/

// METHOD_2:
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Prints upper part of the pattern
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    // Print lower part of the pattern
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}