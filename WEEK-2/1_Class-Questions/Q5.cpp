// Enter week number and print the day of the week

// METHOD_1:
#include <iostream>
using namespace std;

int main()
{

    int day;
    cout << "Enter week number: ";
    cin >> day;

    if (day == 1)
    {
        cout << "Monday";
    }
    else if (day == 2)
    {
        cout << "Tuesday";
    }
    else if (day == 3)
    {
        cout << "Wednessday";
    }
    else if (day == 4)
    {
        cout << "Thursday";
    }
    else if (day == 5)
    {
        cout << "Friday";
    }
    else if (day == 6)
    {
        cout << "Saturday";
    }
    else if (day == 7)
    {
        cout << "Sunday";
    }
    else
    {
        cout << "Invalid Input!!!";
    }

    return 0;
}

// METHOD_2:
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int day;
//     cout << "Enter week number: ";
//     cin >> day;

//     switch (day)
//     {
//     case 1:
//         cout << "Monday";
//         break;
//     case 2:
//         cout << "Tuesday";
//         break;
//     case 3:
//         cout << "Wednessday";
//         break;
//     case 4:
//         cout << "Thursday";
//         break;
//     case 5:
//         cout << "Friday";
//         break;
//     case 6:
//         cout << "Saturday";
//         break;
//     case 7:
//         cout << "Sunday";
//         break;

//     default:
//         cout << "Invalid Input!!!";
//         break;
//     }

//     return 0;
// }