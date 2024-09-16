// function to return sum

#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = sum(a, b);
    cout << ans;

    return 0;
}