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
        if(str[i] == 'o')
        {
            cout << i <<" ";
        }
    }
    return 0;
}