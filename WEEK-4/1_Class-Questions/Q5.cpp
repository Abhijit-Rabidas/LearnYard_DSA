// Check if a element is present in array or not

#include <bits/stdc++.h>
using namespace std;

bool findElement(int element, int *arr)
{
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == element)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int item;
    cout << "Enter element to check: ";
    cin >> item;

    bool ans = findElement(item, arr);
    if (ans)
    {
        cout << "Present";
    }
    else
    {
        cout << "Not Present";
    }

    return 0;
}