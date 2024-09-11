// Check if a given number is prime or not?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int flag = 0;

    if (n <= 1)
    {
        flag++;
    }
    else
    {
        for (int i = 2; i <= n/2; i++)
        {
            if (n % i == 0)
            {
                flag++;
                break;
            }
        }
    }

    if (flag == 0)
    {
        cout << n << " is Prime Number";
    }
    else
    {
        cout << n << " is Not Prime Number";
    }

    return 0;
}