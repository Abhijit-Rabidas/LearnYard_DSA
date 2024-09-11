// Get first N numbers that have sum of digits = k

#include <bits/stdc++.h>
using namespace std;

int SumOfDigit(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += (num % 10);
        num /= 10;
    }
    return sum;
}

int main()
{
    int n, k;
    cin >> n >> k;

    int num = 1;
    while (1)
    {
        int sod = SumOfDigit(num);
        if (sod == k)
        {
            cout << num << endl;
            n--;
        }
        num++;

        if (n == 0)
        {
            break;
        }
    }

    return 0;
}

/*
#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int count = 0;
    int number = 1;

    while (count < n)
    {

        int digit_sum = 0;

        for (int rem = number; rem > 0; rem /= 10)
        {
            digit_sum += rem % 10;
        }

        if (digit_sum == k)
        {
            count++;
            cout << number << endl;
        }

        number++;
    }

    return 0;
}
*/
