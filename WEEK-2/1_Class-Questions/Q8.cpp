// check whether a number is prime or not

// METHOD_1:
#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter the number: ";
    cin >> num;

    int flag = true;

    // If the number is less than or equal to 1, it is not prime

    if (num <= 1)
    {
        flag = false;
    }
    else
    {
        // Check for divisors from 2 to n-1
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                flag = false;
                break;
            }
        }
    }

    if (flag == true)
    {
        cout << num << " is PRIME";
    }
    else
    {
        cout << num << " is NOT PRIME";
    }

    return 0;
}

// METHOD_2:
//  #include <iostream>
//  using namespace std;

// int main()
// {

//     int num;
//     cout << "Enter the number: ";
//     cin >> num;

//     int flag = true;

//     // If the number is less than or equal to 1, it is not prime

//     if (num <= 1)
//     {
//         flag = false;
//     }
//     else
//     {
//         // The loop terminates at i == n/2 because we cannot find any factor for n beyond
//         //the number n/2. So, any iteration beyond n/2 is redundant.
//         for (int i = 2; i < num / 2; i++)
//         {
//             if (num % i == 0)
//             {
//                 flag = false;
//                 break;
//             }
//         }
//     }

//     if (flag == true)
//     {
//         cout << num << " is PRIME";
//     }
//     else
//     {
//         cout << num << " is NOT PRIME";
//     }

//     return 0;
// }


// METHOD_3:
// C++ Program to Check if a Number is Prime using Brute
// Force Method
// #include <iostream>
// using namespace std;

// bool isPrime(int n) {

//     // If the number is less than or equal to 1, it is not
//     // prime
//     if (n <= 1) {
//         return false;
//     }

//     // Check for divisors from 2 to n-1
//     for (int i = 2; i < n; i++) {

//         // If n is divisible by any number in this range, it
//         // is not prime
//         if (n % i == 0) {
//             return false;
//         }
//     }

//     // If no divisors are found, it is prime
//     return true;
// }

// int main() {
//     int n = 10;

//     if (isPrime(n))
//         cout << "Prime" << endl;
//     else
//         cout << "Not Prime" << endl;

//     return 0;
// }