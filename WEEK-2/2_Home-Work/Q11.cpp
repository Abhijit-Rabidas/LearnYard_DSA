// Calculate product of all digits
/*
   n = 234
   productOfDigit = 2*3*4 = 24
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int productOfDigit = 1;
    while (n > 0)
    {
        int lastDigit = n % 10;
        productOfDigit = productOfDigit * lastDigit;
        n = n / 10;
    }

    cout << "Product of all digits: " << productOfDigit;

    return 0;
}