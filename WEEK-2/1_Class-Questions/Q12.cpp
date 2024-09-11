// Program to count the number of digits of a positive number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cin >> number;

    if (number == 0)
    {
        cout << "Count of Digits: " << 1;
    }
    else
    {
        int digitCount = 0;
        while (number > 0)
        {
            digitCount++;
            number = number / 10;
        }

        cout << "Count of Digits: " << digitCount;
    }

    return 0;
}