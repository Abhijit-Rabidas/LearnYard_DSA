// pass by referrence

#include <bits/stdc++.h>
using namespace std;

int func(int &a, int &b) // &a = x, &b = y, we are not coping x and y using itself
{
    a++;
    return a + b;
}

int main()
{
    int x = 9, y = 18;

    cout << func(x, y) << endl;
    cout << x << endl;

    return 0;
}