// Program to find armstrong number between 1 to n
#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int num)
{
    int n_copy = num;

    // Count of Digits in n
    int numOfDigit = 0;
    while (num > 0)
    {
        num = num / 10;
        numOfDigit++;
    }

    // Sum of digits raised to the power number of digits

    num = n_copy; // as the value of n has changed to 0
    int sum = 0;
    while (num > 0)
    {
        int lastDigit = num % 10;
        sum = sum + pow(lastDigit, numOfDigit);
        num = num / 10; // removing the last digit
    }

    if (sum == n_copy)
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

    for (int i = 1; i<=n;i++)
    {
        if (isArmstrong(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int num = i;
        int n_copy = num;

        // Count of Digits in n
        int numOfDigit = 0;
        while (num > 0)
        {
            num = num / 10;
            numOfDigit++;
        }

        // Sum of digits raised to the power number of digits

        num = n_copy; // as the value of n has changed to 0
        int sum = 0;
        while (num > 0)
        {
            int lastDigit = num % 10;
            sum = sum + pow(lastDigit, numOfDigit);
            num = num / 10; // removing the last digit
        }

        if (sum == n_copy)
        {
            cout << n_copy << " ";
        }
    }

    return 0;
}
*/