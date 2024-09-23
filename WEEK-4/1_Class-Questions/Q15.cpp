// Program to find smallest element in the 

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

    int min_element = arr[0];
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min_element)
        {
            min_element = arr[i];
        }
    }

    cout << min_element;
}