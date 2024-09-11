// Program to convert number from binary to decimal

// METHOD_1:
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int i = 0;
    int sum = 0;
    while (num > 0)
    {
        int lastDigit = num % 10;
        sum = sum + lastDigit * pow(2, i);
        i++;
        num = num / 10;
    }

    cout << "The decimal equivalent: " << sum;
    return 0;
}