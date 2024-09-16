#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 9;
    int &b = a;
    cout << a << " " << b << endl;
    cout << &a << " " << &b;
    return 0;
}
