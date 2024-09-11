//  Print all factors of a number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) // i<=n as n also a factor of itself
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}