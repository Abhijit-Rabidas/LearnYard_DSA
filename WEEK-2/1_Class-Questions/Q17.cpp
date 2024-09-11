// Program to check whether a number is Armstrong or not

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int n_copy = n;

    // Count of Digits in n
    int numOfDigit = 0;
    while (n > 0)
    {
        n = n / 10;
        numOfDigit++;
    }

    // Sum of digits raised to the power number of digits

    n = n_copy; // as the value of n has changed to 0
    int sum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum = sum + pow(lastDigit, numOfDigit);
        n = n / 10; // removing the last digit
    }

    if (sum == n_copy)
    {
        cout << "Armstrong";
    }
    else
    {
        cout << "Not Armstrong";
    }

    return 0;
}

// METHOD_2:
//  #include <bits/stdc++.h>
//  using namespace std;

// int NumOfDigits(int n)
// {
//     int count = 0;

//     while (n > 0)
//     {
//         n = n / 10;
//         count++;
//     }

//     return count;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int n_copy = n;

//     int num_digit = NumOfDigits(n);
//     int sum = 0;
//     while (n > 0)
//     {
//         int rem = n % 10;
//         n = n/10;
//         sum += pow(rem, num_digit);
//     }

//     if (sum == n_copy)
//     {
//         cout << "Armstrong";
//     }
//     else
//     {
//         cout << "Not Armstrong";
//     }

//     return 0;
// }