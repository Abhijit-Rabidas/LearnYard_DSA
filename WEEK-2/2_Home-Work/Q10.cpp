//  Print all prime numbers from 1 to N.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        bool flag = true;

        if (i <= 1)
        {
            flag = false;
        }
        else
        {
            for (int j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    flag = false;
                    break;
                }
            }
        }

        if (flag == true)
        {
            cout << i << " ";
        }
    }

    return 0;
}