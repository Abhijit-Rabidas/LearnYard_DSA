// String Functions
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name = "Abhijit Rabidas";
    cout << name.size() << endl;
    cout << name.empty() << endl; // return true and false
    name = "Mr. " + name;         // concatinate

    cout << name << endl;
    name.push_back(' '); // append
    name += "MCA";
    cout << name << endl;

    // comparing 2 strings
    string str = "Mr. Abhijit Rabidas MCA";
    if (name == str)
    {
        cout << "name is same as str" << endl;
    }

    return 0;
}