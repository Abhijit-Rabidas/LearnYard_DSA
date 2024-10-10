#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "abc def ghi edf";

    int l = s.length();
    int countSpace = 0;

    for (int i = 0; i < l; i++)
    {
        if (s[i] == ' ')
        {
            countSpace++;
        }
    }

    int numberOfWords = countSpace + 1;

    string words[numberOfWords];
    int index = 0;

    // ["abc", "def", "ghi", ""]
    string currentWord = "";

    for (int i = 0; i < l; i++)
    {
        if (s[i] != ' ')
        {
            currentWord += s[i];
        }
        else
        {
            words[index] = currentWord;
            currentWord = "";
            index++;
        }
    }

    words[index] = currentWord;

    reverse(words, words + numberOfWords);

    for (int i = 0; i < numberOfWords; i++)
    {
        cout << words[i] << " ";
    }
    return 0;
}
