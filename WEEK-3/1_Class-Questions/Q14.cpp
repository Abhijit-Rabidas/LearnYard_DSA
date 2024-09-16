// default parameter

#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b = 10)
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

/*
int sum(int a, int b = 10)
{
    int c = a + b;
    return c;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = sum(a);
    cout << ans;

    return 0;
}
*/

/*
int sum(int a = 10, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = sum(a);
    cout << ans;

    return 0;
}
*/
