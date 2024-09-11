/*Also if there is a danger number also given, how can we stop the loop at that time ?*/
#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int danger_num;
    cin >> danger_num;

    for (int i = 1; i <= n; i++)
    {
        if (i == danger_num)
        {
            break;
        }
        else
        {
            if ((i % 3 == 0) && (i % 5 == 0))
            {
                cout << "FizzBuzz";
            }
            else if (i % 3 == 0)
            {
                cout << "Fizz";
            }
            else if (i % 5 == 0)
            {
                cout << "Buzz";
            }
            else
            {
                cout << i;
            }
            cout << endl;
        }
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
    int danger_num;
    cin >> danger_num;

    for (int i = 1; i <= n; i++)
    {
        if (i == danger_num)
        {
            break;
        }
        else if (i % 4 == 0)
        {
            continue;
        }
        else if (i % 3 == 0 && i % 5 == 0)
        {
            cout << "FizzBuzz ";
        }
        else if (i % 5 == 0)
        {
            cout << "Buzz ";
        }
        else if (i % 3 == 0)
        {
            cout << "Fizz ";
        }
        else
        {
            cout << i << " ";
        }
    }

    return 0;
}
*/