#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4][6];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << "arr" <<"[" << i << "]" <<"[" << j << "]" << " = " ;
            cin >> arr[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }

    cout << endl;
    for (int j = 0; j < 6; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }

    return 0;
}