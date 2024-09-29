// Program to check whether a number is Armstrong or not

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int n_copy = n;

    if(n == 0)
    {
        cout << "Not Armstrong";
        return 0;
    }    
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
// // Program to check whether a number is Armstrong or not

// #include <bits/stdc++.h>
// using namespace std;

// int numOfDigits(int n)
// {
//     int count = 0;
//     while(n>0)
//     {
//         count++;
//         n = n / 10;
//     }
//     return count;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int n_copy = n;
    
//     if(n == 0)
//     {
//         cout <<"Not Armstrong";
//         return 0;
//     }
    
//     int nod = numOfDigits(n);
//     int sum = 0;
//     while(n>0)
//     {
//         int lastDigit = n % 10;
//         sum = sum + pow(lastDigit, nod);
//         n /= 10;
//     }
//     if(sum == n_copy)
//     {
//         cout << "Armstrong";
//     }
//     else
//     {
//         cout << "Not Armstrong";
//     }

//     return 0;
// }
