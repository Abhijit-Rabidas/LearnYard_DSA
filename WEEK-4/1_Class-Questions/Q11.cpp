// Find two indexes in array whose sum is equal to target element
// Note: input array is sorted

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int i = 0;
    int j = n - 1;

    int result[2]; // Array to store indexes

    while (i <= j)
    {
        if ((arr[i] + arr[j]) == target)
        {
            result[0] = i;
            result[1] = j;
            break;
        }
        else if ((arr[i] + arr[j]) > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    // Printting Indexes
    for (int i = 0; i < 2; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}