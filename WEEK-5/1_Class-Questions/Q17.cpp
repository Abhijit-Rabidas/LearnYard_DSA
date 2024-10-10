#include <bits/stdc++.h>
using namespace std;

bool match(string s, string target, int startIndex)
{
    int i = startIndex; // s string
    int j = 0;          // target string

    while (i < s.length() && j < target.length())
    {
        if (s[i] != target[j])
        {
            return false;
        }
        i++;
        j++;
    }
    return true;
}

int main()
{
    string s = "I love programming. I love codeforwin.";
    string target = "love";

    for (int i = 0; i < s.size(); i++)
    {
        if (match(s, target, i) == true)
        {
            cout << i << " ";
        }
    }
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, str2;
    getline(cin, str); // input string with spaces

    int size = str.size();

    string target;
    getline(cin, target); // input target string with spaces

    int t_size = target.size();

    for (int i = 0; i <= size - t_size; i++) // Avoid out of bounds
    {
        if (str[i] == ' ')
        {
            continue;
        }

        str2 = str.substr(i, t_size); // Extract substring from str starting at i of length t_size

        if (str2 == target)
        {
            cout << i << " ";
        }
    }
    return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str); // input string with spaces
    cout << str << endl;

    int size = str.size();
    //cout << size;

    // int l = str.length();
    // cout <<l;

    for(int i = 0; i<size; i++)
    {
        int j = i;
        if(str[i] == ' ')
        {
            continue;
        }
        if(str[j] == 'l' && str[j+1] == 'o' && str[j+2] == 'v' && str[j+3] == 'e')
        {
            cout << i << " ";
        }
    }
    return 0;
}
*/