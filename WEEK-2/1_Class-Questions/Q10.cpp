/*Let’s say in fizzbuzz, an extra condition is that for multiples of 4, do nothing. What can be done in this 
scenario ?*/

#include <iostream>
using namespace std;

int main()
{

    int num;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (i % 4 == 0)
        {
            continue;
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