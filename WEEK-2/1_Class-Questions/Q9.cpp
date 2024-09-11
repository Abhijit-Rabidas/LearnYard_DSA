/*
Print “FizzBuzz" if i is divisible by 3 and 5.
Print “Fizz" if i is divisible by 3.
Print ”Buzz" if I is divisible by 5.
Print i if none of the above conditions are true.
*/
#include <iostream>
using namespace std;

int main()
{

    int num;
    cin >> num;

    for (int i = 1; i <= num; i++)
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

    return 0;
}