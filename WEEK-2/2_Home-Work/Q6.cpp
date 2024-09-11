// Program to find HCF (GCD) of two numbers.

// METHOD_1:
#include <iostream>
using namespace std;

int main()
{
    int n1, n2, hcf;
    cin >> n1 >> n2;

    // swapping variables n1 and n2 if n2 is greater than n1.
    if (n2 > n1)
    {
        int temp = n2;
        n2 = n1;
        n1 = temp;
    }

    for (int i = 1; i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
        }
    }

    cout << "HCF = " << hcf;

    return 0;
}

/* Saksham bhaiya's code

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a = 4;
    int b = 8;

    // a = 1 2 4 (5 6 7 8)
    // b = 1 2 4 8

    int minimum = 0;

    if (a < b)
    {
        minimum = a;
    }
    else
    {
        minimum = b;
    }

    int answer = 1;

    // STEP 1: i=1, 1<=4 (true), 4%1 == 0 (true) && 8%1 == 0 (true), answer = 1
    // STEP 2: i=2, 2<=4 (true), 4%2 == 0 (true) && 8%2 == 0 (true), answer = 2
    for (int i = 1; i <= minimum; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            answer = i;
        }
    }

    cout << answer << "\n";

    // GCD - Greatest common Divisor
    // 5 -->  1 5
    // 15 --> 1 3 5 15

    // GCD(5, 15) -> 5

    return 0;
}
*/


// #include <iostream>
// using namespace std;

// int main()
// {
//     int n1, n2;

//     cout << "Enter two numbers: ";
//     cin >> n1 >> n2;

//     while (n1 != n2)
//     {
//         if (n1 > n2)
//         {
//             n1 = n1 - n2;
//         }
//         else
//         {
//             n2 = n2 - n1;
//         }
//     }

//     cout << "HCF = " << n1;

//     return 0;
// }


