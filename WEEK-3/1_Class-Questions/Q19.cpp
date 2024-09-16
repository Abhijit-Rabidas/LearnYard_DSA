// Even odd number using Functions

#include <bits/stdc++.h>
using namespace std;

bool even_odd(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;

    int ans = even_odd(n);
    if (ans == true)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }

    return 0;
}