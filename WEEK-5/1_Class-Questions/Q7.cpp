// ekke

#include <bits/stdc++.h>
using namespace std;

int const N = 150;
int arr[N][N];

void move(int R, int C, int col)
{
    while (R >= 0 && C < col)
    {
        cout << arr[R][C] << " ";
        R--;
        C++;
    }
    cout << endl;
}

int main()
{
    int row, col;
    cin >> row >> col;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // STEP_1 : starting point (First column)
    for (int i = 0; i < row; i++)
    {
        int R = i;
        int C = 0;

        move(R, C, col);
    }

    // STEP_2 : starting point (Last row)
    for (int i = 1; i < row; i++)
    {
        int R = row - 1;
        int C = i;

        move(R, C, col);
    }
    return 0;
}