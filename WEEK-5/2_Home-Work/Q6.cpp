// C++ program to find length of a string. 

/*
Input
Input string: I love programming. I love Codeforwin.
Output

Length of string: 38
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Input string: ";
    getline(cin, str);

    cout << "Length of string: " << str.size();
    // cout << "Length of string: " << str.length();

    return 0;
}