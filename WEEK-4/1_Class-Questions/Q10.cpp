// Put even and odd elements of array in two separate array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    // Counting number of even and odd elements
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    if (evenCount > 0)
    {
        int evenArray[evenCount];
        int evenIndex = 0;
        for (int i = 0; i < n; i++)
        {
            if (array[i] % 2 == 0)
            {
                evenArray[evenIndex] = array[i];
                evenIndex++;
            }
        }

        // printing the even array
        for (int i = 0; i < evenCount; i++)
        {
            cout << evenArray[i] << " ";
        }
    }

    cout << endl;

    if (oddCount > 0)
    {
        int oddArray[oddCount];
        int oddIndex = 0;
        for (int i = 0; i < n; i++)
        {
            if (array[i] % 2 != 0)
            {
                oddArray[oddIndex] = array[i];
                oddIndex++;
            }
        }

        // printing the odd array
        for (int i = 0; i < oddCount; i++)
        {
            cout << oddArray[i] << " ";
        }
    }

    return 0;
}

/*
// Saksham bhaiya's code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    // Counting number of even and odd elements
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    if (evenCount > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (array[i] % 2 == 0)
            {
                cout << array[i] << " ";
            }
        }
        cout << endl;
    }

    if (oddCount > 0)
    {

        for (int i = 0; i < n; i++)
        {
            if (array[i] % 2 != 0)
            {
                cout << array[i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    // Counting number of even and odd elements
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }


    // here, I created separte array for even and odd
    int evenArray[evenCount];
    int oddArray[oddCount];
    int evenIndex = 0;
    int oddIndex = 0;

    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            evenArray[evenIndex] = array[i];
            evenIndex++;
        }
        else
        {
            oddArray[oddIndex] = array[i];
            oddIndex++;
        }
    }

    // printing the even array
    for (int i = 0; i < evenCount; i++)
    {
        cout << evenArray[i] << " ";
    }

    cout << endl;
    // printing the odd array
    for (int i = 0; i < oddCount; i++)
    {
        cout << oddArray[i] << " ";
    }

    return 0;
}
*/