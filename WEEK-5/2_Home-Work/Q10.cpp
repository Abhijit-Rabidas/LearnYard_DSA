// C++ program to find total number of alphabets, digits or special characters in a string

/*
Input
Input string: I love Codeforwin.

Output
Alphabets = 15
Digits = 0
Special characters = 3
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    cout << "Input string1: ";
    getline(cin, str);

    int n = str.size();

    int count_alpha = 0;
    int count_digit = 0;
    int count_spchar = 0;

    for (int i = 0; i < n; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            count_alpha++;
        }
        else if (str[i] >= 0 && str[i] <= 9)
        {
            count_digit++;
        }
        else
        {
            count_spchar++;
        }
    }

    cout << "Alphabets: " << count_alpha << endl;
    cout << "Digits: " << count_digit << endl;
    cout << "Special Characters: " << count_spchar << endl;

    /*
    we can use isalpha() and isdigit() functions
    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i])) {
            alphabets++;
        } else if (isdigit(str[i])) {
            digits++;
        } else {
            specialChars++;
        }
    }
    */
    return 0;
}