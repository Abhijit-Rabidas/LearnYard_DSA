// Program to find prime factors (which factors are prime) of a number

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    int flag = 0;
    for (int i = 2; i <= n / 2; i++)
    {

        if (n % i == 0)
        {
            flag++;
            break;
        }
    }

    if (flag == 0)
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
    int num;
    cin >> num;

    cout << "Prime Factors: ";
    for (int i = 2; i <= num / 2; i++)
    {
        if ((num % i == 0) && (isPrime(i) == true))
        {
            cout << i << " ";
        }
    }

    return 0;
}