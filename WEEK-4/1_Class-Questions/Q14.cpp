// Program to input elements in array from user and count duplicate elements in array

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

    int maximumNumber = 0;
    for (int i = 0; i < n; i++)
    {
        maximumNumber = max(maximumNumber, arr[i]);
    }

    int fre[maximumNumber + 1] = {};

    for (int i = 0; i < n; i++)
    {
        fre[arr[i]]++;
    }

    int count = 0;
    for (int i = 0; i < (maximumNumber + 1); i++)
    {
        if (fre[i] >= 2)
        {
            count++;
        }
    }

    cout << "Number of Duplicate elements: " << count;

    return 0;
}