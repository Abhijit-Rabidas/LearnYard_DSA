// check if an Array is sorted or not

#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int n) // Pass the size of the array
{
    for (int i = 0; i < n - 1; i++) // Loop only till n-1
    {
        if (arr[i] > arr[i + 1])
        {
            return false; // Return false if any out-of-order element is found
        }
    }
    return true; // If no such pair is found, return true
}

int main()
{
    
    int n;
    cin >> n;

    int arr[n];
    
    // Input the array elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Check if the array is sorted
    bool ans = isSorted(arr, n);

    // Output the result
    if (ans)
    {
        cout << "Sorted";
    }
    else
    {
        cout << "Not sorted";
    }

    return 0;
}
