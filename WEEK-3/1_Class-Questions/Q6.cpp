/*
Input a number n and print the below pattern.
let, n = 5

        5
        44
        333
        2222
        11111

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << n - i + 1;
        }
        cout << endl;
        
    }

    return 0;
}