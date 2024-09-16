// Given two integers n and r, find nPr
/*
nCr = n! / (n-r)!
*/

#include <bits/stdc++.h>
using namespace std;

long factorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}

/*
// Without using recursion
long factorial(int number)
{
    long fact = 1;
    for(int i =1; i<=n; i++)
    {
        fact = fact*i;
    }
    return fact;
}
*/

long find_nPr(int n, int r)
{
    if (r > n)
        return 0; // if r is greater than n, nCr is not defined.

    long NPR;
    NPR = factorial(n) / factorial(n - r);
    return NPR;
}

int main()
{
    int n, r;
    cout << "Enter values for n and r: ";
    cin >> n >> r;
    cout << "nPr: " << find_nPr(n, r) << endl;

    return 0;
}
