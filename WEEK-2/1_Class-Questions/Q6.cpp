// Print all odd numbers from 1 to n

// METHOD_1:
#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter the number upto which you want to print odd numbers: ";
    cin >> num;

    for (int i = 1; i <= num; i = i + 2)
    {
        cout << i << " ";
    }

    return 0;
}

// METHOD_2:
// #include <iostream>
// using namespace std;

// int main()
// {

//     int num;
//     cout << "Enter the number upto which you want to print odd numbers: ";
//     cin >> num;

//     for (int i = 1; i <= num; i++)
//     {
//         if (i % 2 != 0)
//         {
//             cout << i << " ";
//         }
//     }

//     return 0;
// }
