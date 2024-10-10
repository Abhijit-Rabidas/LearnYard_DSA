#include <bits/stdc++.h>
using namespace std;

int main()
{

    string a = "abc def abc asdasdssssssss";

    int maxFreq = 0;
    char answer = ' ';
    int l = a.length();

    for (int i = 0; i < l; i++)
    {
        char fixedLetter = a[i];
        int countFreq = 0;

        for (int j = 0; j < l; j++)
        {
            if (fixedLetter == a[j])
            {
                countFreq++;
            }
        }

        if (countFreq > maxFreq)
        {
            maxFreq = countFreq;
            answer = fixedLetter;
        }
    }

    cout << answer << " " << maxFreq;
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{

    string a = "aabc def abc asdasdssssssss";

    int maxfreq = 0;
    char answer = ' ';

    for (int i = 0; i < a.length(); i++)
    {
        int count = 0;

        for (int j = 0; j < a.length(); j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }

        if(count > maxfreq)
        {
            maxfreq = count;
            answer = a[i];
        }
    }
    cout << answer << " " << maxfreq;
    return 0;
}
*/