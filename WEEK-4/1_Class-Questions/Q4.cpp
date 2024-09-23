// Print Array using function
#include <bits/stdc++.h>
using namespace std;

void PrintArray(int *arr)
{
    for(int i = 0; i< 5; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[5];

    for(int i = 0; i< 5; i++){
        cin >> arr[i];
    }

    PrintArray(arr);
    
    return 0;
}