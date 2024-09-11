// sum of digits of a positive number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    while (n != 0)
    {
        sum = sum + (n % 10);
        // sum += (n % 10);
        n /= 10;
    }

    cout << "Sum of digits: " << sum;

    return 0;
}

/*
// METHOD_2:
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;

    while (n != 0)
    {
        int rmd = n % 10; // rmd = right most digit
        n = n / 10;
        sum = sum + rmd;
    }

    cout << "Sum of digits: " << sum;

    return 0;
}
*/