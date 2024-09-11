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
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;

    for (int number = 1; number <= n; number++)
    {
        int sum = 0;

        for (int rem = number; rem > 0; rem /= 10)
        {
            sum = sum + rem % 10;
        }

        if (sum == k)
        {

            cout << "For the number " << number << " sum of digits is equal to " << k <<endl;
        }
    }
    return 0;
}
*/