// Strings
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cin >> name; // can't store spaces using cin
    cout << name << endl;

    string name1 = "Abhijit Das";
    cout << name1 << endl;

    string name2;
    getline(cin, name2); // input string with spaces
    cout << name2;

    // Delimeter
    string name3;
    getline(cin, name3, '.'); // stop reading when get .
    cout << name3 << endl;

    string Paragraph;
    while (1)
    {
        string line;
        getline(cin, line);
        if (line.size() == 0)
        {
            break;
        }
        Paragraph += line;
        Paragraph += "\n";
    }
    Paragraph.pop_back(); // delete the last character
    cout << Paragraph;

    return 0;
}