// String to int
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // add these 2 strings like integers
    string str1 = "123";
    string str2 = "45";
    //cout << stoi(str1) + stoi(str2) << endl;

    int num1 = stoi(str1);
    int num2 = stoi(str2);

    cout << num1 + num2 << endl;

    // now make the output reverse to string
    string str3 = to_string(num1 + num2);
    cout << str3 << endl;

    // now reverse the string
    reverse(str3.begin(), str3.end());
    cout << str3 << endl;
    return 0;
}