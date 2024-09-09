//  Enter P, R, T and calculate simple interest. 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    float p, r, t, i;

    cout << "Enter the principle amount: ";
    cin >> p;
    cout << "Enter the rate of interest: ";
    cin >> r;
    cout << "Enter time (In years): ";
    cin >> t;

    i = (p*t*r) / 100;

    cout << "Simple Interest -> " << i;

    return 0;
}
