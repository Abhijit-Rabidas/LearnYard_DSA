/* Program to input elements in array and search whether an element exists in array or not
and out put the index */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; // size of array
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
     
    int k; // item to be searched
    cin >> k;

    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            index = i;
            break;
        }
    }

    cout << "Item present at " << index << " Index";

    return 0;
}