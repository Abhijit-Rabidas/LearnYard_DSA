// Check whether a number is palindrome or not

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int rev = 0; // reverse
    int n_copy = n;

    while (n_copy != 0)
    {
        int d = n_copy % 10;
        rev = rev * 10 + d;
        n_copy /= 10;
    }

    if (rev == n)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }

    return 0;
}