// Find maximum and minimum in a array

#include <bits/stdc++.h>
using namespace std;

int findMaxEle(int *arr)
{
    int max_ele = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max_ele)
        {
            max_ele = arr[i];
        }
    }

    return max_ele;
}

int findMinEle(int *arr)
{
    int min_ele = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < min_ele)
        {
            min_ele = arr[i];
        }
    }

    return min_ele;
}

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Maximum: " << findMaxEle(arr) << endl;
    cout << "Maximum: " << findMinEle(arr) << endl;

    return 0;
}