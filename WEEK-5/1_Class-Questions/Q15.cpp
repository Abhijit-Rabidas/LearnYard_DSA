// function to check wheter a string is palindrome or not
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s) // passing as referrence as we are not changing the string
{
    int l = 0, r = s.size() - 1;
    while (l <= r)
    {
        if (s[l] != s[r])
        {
            return false; // Return false if any mismatch is found
        }
        l++; // Increment left pointer
        r--; // Decrement right pointer
    }
    return true; // Return true if no mismatches are found
}
int main()
{
    string str;
    cin >> str;

    if (isPalindrome(str))
    {
        cout << "it is Palindrome";
    }
    else
    {
        cout << "it is not Palindrome";
    }
    return 0;
}