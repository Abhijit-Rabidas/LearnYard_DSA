// Given a sorted array find its median
/*
e.g;
2 3 6 7 4 8 9 -> odd
median -> 7

e.g;
2 3 5 7 9 8 -> even

median -> (5 + 7) / 2
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    double ans;

    if (n % 2 == 0) // even case
    {
        ans = (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    }
    else // odd case
    {
        ans = arr[n / 2];
    }

    cout << ans;

    return 0;
}
