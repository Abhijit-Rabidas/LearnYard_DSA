// C++ program to concatenate two strings

/*
Input
Input string1: I love
Input string2: Codeforwin

Output
Concatenated string: I love Codeforwin
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2, result;

    cout << "Input string1: ";
    getline(cin, str1);

     cout << "Input string2: ";
    getline(cin, str2);

    result = str1 + str2;

    // Output the Concatenated string
    cout << "Concatenated string: " << result << endl;

    return 0;
}