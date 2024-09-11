
// Program to find LCM (Least Common Multiplicator) of two numbers.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    int minimum = 0;

    if (a < b)
    {
        minimum = a;
    }
    else
    {
        minimum = b;
    }

    int gcd = 0;

    for (int i = 1; i <= minimum; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }

    cout << "LCM = " << ((a * b) / gcd) << "\n";

    return 0;
}

/*
#include <iostream>
using namespace std;

int main()
{

    int n1, n2, max, lcm;

    cout << "Enter two positive integers: ";
    cin >> n1 >> n2;

    // maximum number between n1 and n2 is stored in max

    if (n1 > n2)
    {
        max = n1;
    }
    else
    {
        max = n2;
    }

    lcm = max;

    while ((lcm % n1 != 0) || (lcm % n2 != 0))
    {
        lcm += max;
    }

    cout << "The LCM of " << n1 << " and " << n2 << " is " << lcm;

    return 0;
}

*/

// LCM Calculation Using GCD
// #include <iostream>
// using namespace std;

// int main()
// {

//     int n1, n2, i, gcd, lcm;

//     cout << "Enter two positive integers: ";
//     cin >> n1 >> n2;

//     // loop to find the GCD
//     for (i = 1; i <= n1 && i <= n2; ++i)
//     {

//         // check if i is a factor of both integers
//         if (n1 % i == 0 && n2 % i == 0)
//         {
//             gcd = i;
//         }
//     }

//     lcm = (n1 * n2) / gcd;

//     cout << "The LCM of " << n1 << " and " << n2 << " is " << lcm;
//     return 0;
// }