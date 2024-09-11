// WAP to input 3 numbers a and b, and print max among them

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a >= b && a >= c)
    {
        cout << a << " is the largest";
    }
    else if (b >= a && b >= c)
    {
        cout << b << " is the largest";
    }
    else if (c >= a && c >= b)
    {
        cout << c << " is the largest";
    }
    else
    {
        cout << "all numbers are equal";
    }
    return 0;
}
