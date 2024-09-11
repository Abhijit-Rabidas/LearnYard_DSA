// Print first and last digit of a number

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Get the last digit
    int lastDigit = n % 10;

    // Get the first digit
    int firstDigit = n;
    while (firstDigit >= 10)
    {
        firstDigit /= 10;
    }

    // Print the first and last digit
    cout << firstDigit << " " << lastDigit << endl;

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int numOfDigits(int num)
{
    int count = 0;
    while (num > 0)
    {
        count++;
        num /= 10;
    }

    return count;
}

int main()
{
    int n;
    cin >> n;

    int digitNumber = numOfDigits(n);
    int firstDigit = 1, lastDigit = 1;

    for (int i = 1; i <= digitNumber; i++)
    {
        int remainder_ = n % 10;
        n = n / 10;

        if (i == digitNumber)
        {
            firstDigit = remainder_;
        }
        else if (i == 1)
        {
            lastDigit = remainder_;
        }
    }

    cout << firstDigit << " " << lastDigit;

    return 0;
}
*/