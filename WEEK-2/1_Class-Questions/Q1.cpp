// WAP to input 2 numbers a and b, and print max of a and b

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a > b)
    {
        cout << a << " is the larger number";
    }
    else if (b > a)
    {
        cout << b << " is the larger number";
    }
    else
    {
        cout << "both the numbers are equal";
    }

    return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    (a > b) ? cout << a << " is the larger number" : (b > a) ? cout << b << " is the larger number"
                                                             : cout << "both the numbers are equal";
}
*/