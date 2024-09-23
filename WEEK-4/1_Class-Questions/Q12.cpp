// program to left rotate an array by n position

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; // size of array
    int k; // number of position to rotate

    cin >> n >> k;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int rotated_arr[n];

    k = k % n; // actual number of rotation
    /*
    let, arr[4] = {1, 2, 3, 4}
         k = 4

         rotation1 -> 2 3 4 1
         rotation2 -> 3 4 1 2
         rotation3 -> 4 1 2 3
         rotation4 -> 1 2 3 4 == arr[]

         and if k = 5, k = 6
         rotation5 = 3 4 1 2 == rotation1
         rotattion6 = 4 1 2 3 == rotation2

         so, if we do k = n % k;

         k = 5
         n = 4
         k = 5 % 4 = 1
    */

    for(int i = 0; i<n; i++)
    {
        int newIndex = i - k;
        if(newIndex < 0)
        {
            newIndex = newIndex + n;
        }
        rotated_arr[newIndex] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << rotated_arr[i] << " ";
    }
    
    return 0;
}