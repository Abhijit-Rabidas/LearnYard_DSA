// some other functions
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name = "Abhijit rabidas";
    name[8] = toupper(name[8]);
    cout << name << endl;
    name[9] = toupper(name[9]);
    cout << name << endl;
    name[9] = tolower(name[9]);
    cout << name << endl;

    cout << isalpha(name[1]) << endl;
    cout << isalpha(name[7]);
    return 0;
}