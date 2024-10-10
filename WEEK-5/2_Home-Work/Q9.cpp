// C++ program to compare two strings

/*
Input
Input string1: Learn at Codeforwin.
Input string2: Learn at Codeforwin.

Output
Both strings are lexographically equal.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;

    cout << "Input string1: ";
    getline(cin, str1);

    cout << "Input string2: ";
    getline(cin, str2);

    if (str1 == str2)
    {
        cout << "Both strings are equal.";
    }
    else if (str1 < str2)
    {
        cout << "First string is lexicographically smaller than second.";
    }
    else
    {
        cout << "First string is lexicographically greater than second.";
    }

    return 0;
}