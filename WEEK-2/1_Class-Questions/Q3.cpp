// Check whether year is leap year or not

/*
Condtions for Leap Year:
Following are the rules to predict if a given is a year leap or not. If any one of the conditions below is met then it's a leap year -
1. If a year is divisible by 400, it's a leap year.
2. If a year is divisible by 4 but not by 100 then its leap year

*/

// //METHOD_1:

#include <iostream>
using namespace std;

int main()
{

  int year;

  cout << "Enter a year: ";
  cin >> year;

  // if year is divisible by 4 AND not divisible by 100
  // OR if year is divisible by 400
  // then it is a leap year
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
  {
    cout << year << " is a leap year.";
  }
  else
  {
    cout << year << " is not a leap year.";
  }

  return 0;
}

// // METHOD_2:
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int year;

//     cout << "Enter year: ";
//     cin >> year;

//     if (year % 400 == 0)
//     {
//         cout << year << " is a Leap Year";
//     }
//     else if (year % 4 == 0 && year % 100 != 0)
//     {
//         cout << year << " is a Leap Year";
//     }
//     else
//     {
//         cout << year << " is not a Leap Year";
//     }

//     return 0;
// }

// // METHOD_3:
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int year;

//     cout << "Enter year: ";
//     cin >> year;

//     if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//     {
//         cout << year << " is a Leap Year";
//     }
//     else
//     {
//         cout << year << " is not a Leap Year";
//     }

//     return 0;
// }

// // METHOD_4:
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int year;

//     cout << "Enter year: ";
//     cin >> year;

//     if (year % 4 == 0)
//     {
//         if (year % 100 == 0)
//         {
//             if (year % 400 == 0)
//             {
//                 cout << year << " is a Leap Year";
//             }
//             else
//             {
//                 cout << year << " is not a Leap Year";
//             }
//         }
//         else
//         {
//             cout << year << " is a Leap Year";
//         }
//     }
//     else
//     {
//         cout << year << " is not a Leap Year";
//     }

//     return 0;
// }