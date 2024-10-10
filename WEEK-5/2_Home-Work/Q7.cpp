// C++ program to copy one string to another string
/*
Input
Input string: I love Codeforwin!

Output
Original string: I love Codeforwin!
Copied string: I love Codeforwin!
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Input string: ";
    getline(cin, str);

    string str2;

    str2 = str;

    // Output the copied string
    cout << "Original string: " << str << endl;
    cout << "Copied string: " << str2 << endl;

    return 0;
}