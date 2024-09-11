// Check if a given number is a power of 2 or not

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int n_copy = n;
    while (n > 1)
    {
        if (n % 2 == 1)
        {
            cout << n_copy << " is not power of 2";
            break;
        }
        n = n / 2;
    }

    if (n == 1)
    {
        cout << n_copy << " is power of 2";
    }

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int n_copy = n;

    int flag = 0;
    while (n > 1)
    {
        if (n % 2 == 1)
        {
            cout << n_copy << " is not power of 2";
            flag++;
            break;
        }
        n = n / 2;
    }

    if (flag == 0)
    {
        cout << n_copy << " is power of 2";
    }

    return 0;
}*/

/* Saksham bhaiya's code

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    while (n > 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            break;
        }
    }

    if (n == 1)
    {
        cout << "Power of 2";
    }
    else
    {
        cout << "Not power of 2";
    }

    return 0;
}
*/