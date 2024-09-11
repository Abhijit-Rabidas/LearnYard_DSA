// C++ program to calculate total, average and percentage of 5 subjects

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m1, m2, m3, m4, m5;

    cout << "Enter marks of subject1: ";
    cin >> m1;
    cout << "Enter marks of subject2: ";
    cin >> m2;
    cout << "Enter marks of subject3: ";
    cin >> m3;
    cout << "Enter marks of subject4: ";
    cin >> m4;
    cout << "Enter marks of subject5: ";
    cin >> m5;

    int obtained_marks = m1 + m2 + m3 + m4 + m5;
    float avg = float(obtained_marks) / 5.0;
    float percent = (float(obtained_marks)/500.0) * 100.0;
    cout << "Toatal = " << obtained_marks << endl;
    cout << "Average = " << avg << endl;
    cout << "Percentage = " << percent << endl;

    return 0;
}