#include <bits/stdc++.h>
using namespace std;

int main(){
    float arr[10];

    cout << arr << endl; // starting address
    cout << (arr+1) << endl; // address of index 1
    cout << sizeof(float) << endl;

    double arr1[10];

    cout << arr1 << endl; // starting address
    cout << (arr1+1) << endl; // address of index 1
    cout << sizeof(double);
    return 0;
}