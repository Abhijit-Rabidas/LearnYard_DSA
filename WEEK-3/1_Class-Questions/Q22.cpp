// Find prime numbers in given range using functions

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

void Display_Prime(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (isPrime(i) == true)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int start, end;
    cin >> start >> end;

    Display_Prime(start, end);
}

/*
#include <bits/stdc++.h>
using namespace std;

int Prime(int lr, int ur)
{
    for(int i = lr; i<=ur; i++)
    {
        int flag =0;
        for(int j = 2; j<=i/2; j++)
        {
            if(i%j == 0)
            {
                flag++;
                break;
            }
        }

        if(flag == 0)
        {
            cout << i << " ";
        }
    }

}

int main()
{
    int lr, ur; // lr - lower limit, ur - upper limit

    cin >> lr >> ur;

    Prime(lr,ur);

    return 0;
}
*/