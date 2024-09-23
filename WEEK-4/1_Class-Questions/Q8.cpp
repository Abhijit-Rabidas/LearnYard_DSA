// Program to insert an element in array at a specific position

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

    int position;
    cin >> position;

    int value;
    cin >> value;

    int answer[n + 1];
    int j = 0;
    for (int i = 0; i < n + 1; i++)
    {
        if (i == position - 1)
        {
            answer[i] = value;
        }
        else
        {
            answer[i] = array[j];
            j++;
        }
    }

    for (int i = 0; i < n + 1; i++)
    {
        cout << answer[i] << " ";
    }

    return 0;
}