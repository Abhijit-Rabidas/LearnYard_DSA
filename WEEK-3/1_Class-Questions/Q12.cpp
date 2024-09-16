// Given a number N, find all the perfect numbers from 1 to N
/*
Note: A number X is a perfect number if the sum of proper divisiors(factor) of the number is equal to x itself.

e.g,

X = 6
factors = 1, 2, 3
sum of factors = 1 + 2 + 3 = 6

sum of factors = X;

so X is a perfect number
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int sumOfDivisior = 0;
        for (int j = 1; j <= i/2; j++) // j<=i/2 as i can't be divided by a number which is > i/2
        {
            if (i % j == 0)
            {
                sumOfDivisior += j;
            }
        }
        if (sumOfDivisior == i)
        {
            cout << i << " ";
        }
    }

    return 0;
}