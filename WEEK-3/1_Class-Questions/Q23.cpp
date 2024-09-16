// Given two integers n and r, find nCr
/*
nCr = n! / (r!*(n-r)!)
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

long find_nCr(int n, int r)
{
    if (r > n)
        return 0; // if r is greater than n, nCr is not defined.

    long NCR;
    NCR = factorial(n) / (factorial(r) * factorial(n - r));
    return NCR;
}

int main()
{
    int n, r;
    cout << "Enter values for n and r: ";
    cin >> n >> r;
    cout << "nCr: " << find_nCr(n, r) << endl;

    return 0;
}
