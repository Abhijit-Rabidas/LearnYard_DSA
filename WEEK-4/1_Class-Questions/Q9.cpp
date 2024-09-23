// Print all subarray of a given array
/*
  Array -> | 1 | 2 | 3 |

  subarray1 -> | 1 |
  subarray2 -> | 2 |
  subarray3 -> | 3 |
  subarray4 -> | 1 | 2 |
  subarray5 -> | 2 | 3 |
  subarray6 -> | 1 | 2 | 3 |

  subarray can't be like this -> | 1 | 3 |
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }


    for (int i = 0; i < n; i++) // i --> starting point
    {
        for (int j = i; j < n; j++) // j --> ending point
        {
            for (int k = i; k<=j; k++)
            {
                cout << array[k] << " ";
            }
            cout << endl;
        }
        
    }

    return 0;
}