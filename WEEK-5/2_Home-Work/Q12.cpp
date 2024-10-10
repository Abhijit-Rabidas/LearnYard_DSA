// C++ program to count number of words in a string

/*
Input
Input string: I love Codeforwin.

Output
Total number of words: 4
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int wordCount = 0;

    // Input the string
    cout << "Enter a string: ";
    getline(cin, str);

    // Check if the string is not empty
    if (!str.empty())
    {
        wordCount = 1; // Start by assuming there is at least one word
    }

    // Loop through the string to count spaces, which separate words
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
        {
            wordCount++;
        }
    }

    // Output the word count
    cout << "Total number of words: " << wordCount << endl;

    // int i = 0;
    // int words = 1;

    // /* Runs a loop till end of string */
    // while (str[i] != '\0')
    // {
    //     /* If the current character(str[i]) is white space */
    //     if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
    //     {
    //         words++;
    //     }

    //     i++;
    // }

    // cout << "Total number of words = " << words;

    return 0;
}