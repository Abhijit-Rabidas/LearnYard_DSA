// Program to check whether a number is negative, positive or zero.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    if (num > 0)
    {
        cout << "Positiive";
    }
    else if (num < 0)
    {
        cout << "Negative";
    }
    else
    {
        cout << "Zero";
    }

    return 0;
}