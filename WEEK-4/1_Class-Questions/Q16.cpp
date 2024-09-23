// find smallest element and second smallest element in the array

/*
case 1: repeating elements
        12 3 56 7 3 5

        second min element -> 3

case 2: repeating elements
        12 3 56 7 3 5

        second min element -> 5        

*/
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
    cout << min_element << endl;


    int sec_min_element = INT_MAX;
    /*
    int sec_min_element;
    if (arr[0] == min_element)
    {
        sec_min_element = arr[1];
    }
    else
    {
        sec_min_element = arr[0];
    }
    */

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < sec_min_element && arr[i] != min_element)
        {
            sec_min_element = arr[i];
        }
    }

    cout << sec_min_element;
}