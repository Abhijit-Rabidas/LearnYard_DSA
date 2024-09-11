// C++ program to convert temperature from fahrenheit to celsius

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double fahrenheit, celsius;

    cout << "Enter temperature in fahrenheit: ";
    cin >> fahrenheit;

    celsius = ((fahrenheit - 32)*5.0)/9.0;

    cout << fahrenheit << " °F = " << celsius << " °C";
    return 0;
}