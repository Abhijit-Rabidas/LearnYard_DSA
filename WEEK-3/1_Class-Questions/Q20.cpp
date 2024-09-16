// Find sum of digits and complete the code in function

#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum = sum + lastDigit;
        n = n / 10;
    }

    return sum;
}

int main()
{
    int n;
    cin >> n;

    int ans = sumOfDigits(n);
    cout << "Sum of Digits: " << ans;

   // cout << "Sum of Digits: " << sumOfDigit(n);

    return 0;
}