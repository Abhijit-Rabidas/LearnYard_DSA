/*
Input a number n and print the below pattern.
let, n = 5

       12345
       2345
       345
       45
       5

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}