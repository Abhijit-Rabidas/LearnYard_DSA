// Check whether a character is alphabet or digit

//METHOD_1:
#include <iostream>
using namespace std;

int main()
{

    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    int asciiVal = ch; // if 'A' --> 65 if 'a' --> 97

    if ((asciiVal >= 65 && asciiVal <= 90) || (asciiVal >= 97 && asciiVal <= 122))
    {
        cout << " It is an alphabet.";
    }
    else
    {
        cout << " It is a digit.";
    }

    return 0;
}

//METHOD_2:
// #include <iostream>
// using namespace std;

// int main()
// {

//     char ch;

//     cout << "Enter a character: ";
//     cin >> ch;
    
//     if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
//     {
//         cout << " It is an alphabet.";
//     }
//     else
//     {
//         cout << " It is a digit.";
//     }

//     return 0;
// }