// Program to print Fibonacci series upto n terms

// 0 1 1 2 3 5 8 .....

// METHOD_1:
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num_term, t1 = 0, t2 = 1, nextTerm = 0;
    cin >> num_term;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= num_term; ++i)
    {
        // Prints the first two terms.
        if (i == 1)
        {
            cout << t1 << " ";
            continue;
        }
        if (i == 2)
        {
            cout << t2 << " ";
            continue;
        }

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << " ";
    }
    return 0;
}

/*
//METHOD_2:
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num_term;
    cin >> num_term;

    int t1 = 0;
    int t2 = 1;

    cout << "Fibonacci Series: ";

    if(num_term == 1)
    {
        cout << t1 << " ";
        return 0;
    }
    if(num_term == 2)
    {
        cout << t1 <<" " << t2 << " ";
        return 0;;
    }
    cout << t1 <<" " << t2 <<" ";

    num_term = num_term - 2;

    while(num_term>0)
    {
        int nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << " ";
        num_term--;
    }
    return 0;
}
*/
