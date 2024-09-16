// Pointers
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int *ptr = &a;       // ptr is a pointer of type int
    cout << ptr << endl; // printing the address
    cout << *ptr << endl;
    cout << sizeof(a) << endl;
    cout << sizeof(ptr) << endl;
    int **ptrPtr = &ptr;
    cout << ptrPtr << endl;
    cout << *ptrPtr << endl; // its ptr ki value ie a ka address
    cout << **ptrPtr << endl;
    return 0;
}
