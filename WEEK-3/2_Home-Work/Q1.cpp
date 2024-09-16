// //C++ program to print number pattern with 1, 0 at alternate columns

/*
   let, n = 5

01010
01010
01010
01010
01010

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
        for (int j = 1; j <= n; j++)
        {
            if (j % 2 == 0)
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }

            // cout << !(j%2);   if value of j%2 = 0, it returns 1,
            // otherwise returns 0 for the !
        }
        cout << endl;
    }

    return 0;
}

/*
// print 1 in odd columns and 0 in odd

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j % 2 == 0)
            {
                cout << 0;
            }
            else
            {
                cout << 1;
            }
        }
        cout << endl;
    }

    return 0;
}
*/