// C++ program to print all Armstrong numbers between given interval using function

#include <bits/stdc++.h>
using namespace std;

int numberOfDigits(int n)
{
    // Calculating number of digits
    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }

    return count;
}

bool isArmstrong(int n)
{
    int n_copy = n;

    int number_of_digit = numberOfDigits(n);
    int sum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum = sum + pow(lastDigit, number_of_digit);
        n = n / 10;
    }

    if (sum == n_copy)
    {
        return true;
    }
    else
    {
        return false;
    }

    // return (sum == n_copy);
}

int main()
{
    int start, end;
    cin >> start >> end;

    for (int i = start; i <= end; i++)
    {
        if (isArmstrong(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}