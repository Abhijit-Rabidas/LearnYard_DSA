// C++ program to perform all basic arithmetic operation

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    
    int sum = num1 + num2;
    int different = num1 - num2;
    int product = num1 * num2;
    float quotient = float(num1) / float(num2);
    int modulus = num1 % num2;

    cout << "Sum = " << sum << endl;
    cout << "Different = " << different << endl;
    cout << "Product = " << product << endl;
    cout << "Quotient = " << quotient << endl;
    cout << "Modulus = " << modulus << endl;

    return 0;
}