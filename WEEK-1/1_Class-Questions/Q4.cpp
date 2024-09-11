// C++ program to find area and perimeter of rectangle

#include <bits/stdc++.h>
using namespace std;

int main()
{
    float length, breadth;

    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter breadth of rectangle: ";
    cin >> breadth;

    float area = length * breadth;
    float perimeter = 2 * ( length + breadth);

    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;

    return 0;
}