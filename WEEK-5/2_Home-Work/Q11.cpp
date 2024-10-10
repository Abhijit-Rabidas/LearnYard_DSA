// C++ program to count total number of vowels and consonants in a string

/*
Input
Input string: I love Codeforwin.

Output
Total Vowels = 7
Total Consonants = 8
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    cout << "Input string1: ";
    getline(cin, str);

    int n = str.size();

    int count_vowel = 0;
    int count_consonant = 0;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count_vowel++;
        }
        else if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count_vowel++;
        }
        else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            count_consonant++;
        }
    }

    cout << "Total Vowels: " << count_vowel << endl;
    cout << "Total Consonants: " << count_consonant << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
    //     {
    //         /*
    //          * If the current character(str[i]) is a vowel
    //          */
    //         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
    //             str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
    //             count_vowel++;
    //         else
    //             count_consonant++;
    //     }
    // }

    // // Loop through the string to count vowels and consonants
    // for (int i = 0; i < n; i++)
    // {
    //     char ch = tolower(str[i]); // Convert character to lowercase for simplicity
    //     if (isalpha(ch))
    //     { // Check if the character is an alphabet
    //         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    //         {
    //             count_vowel++;
    //         }
    //         else
    //         {
    //             count_consonant++;
    //         }
    //     }
    // }

    return 0;
}