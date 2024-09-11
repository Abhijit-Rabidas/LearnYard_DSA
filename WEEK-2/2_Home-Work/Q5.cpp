// Program to find sum of all odd numbers between 1 to n.

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;

    for (int i = 1; i <= n; i = i + 2)
    {
        sum = sum + i;
    }

    cout << sum;
    return 0;
}