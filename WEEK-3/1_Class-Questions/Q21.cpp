// Find maximum and minimum of 2 numbers using functions

#include <bits/stdc++.h>
using namespace std;

int Max(int n1, int n2)
{
    if (n1>n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }

}

int Min(int n1, int n2)
{
    if (n1<n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }

}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    cout << "Max = " << Max(n1, n2) << endl;
    cout << "Min = " << Min(n1, n2) << endl;

    return 0;
}