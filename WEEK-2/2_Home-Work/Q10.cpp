//  Print all prime numbers from 1 to N.

//METHOD_1:
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        if (isPrime(i) == true)
        {
            cout << i << " ";
        }
    }
    return 0;
}

/*
//METHOD_2:

#include <iostream>
using namespace std;

bool isPrime(int n)
{
  int count = 0;
  for(int i = 1; i<=n; i++)
  {
    if(n%i == 0)
    {
      count++;
    }
  }
  
  if(n==1 ||count>2)
  {
    return false;
  }
  else
  {
    return true;
  }
}

int main() 
{
    int n;
    cin >> n;
    
    for(int i=1;i<n;i++)
    {
      if(isPrime(i))
      {
        cout << i << " ";
      }
    }
    return 0;
}
*/

/*
// METHOD_3:
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        bool flag = true;

        if (i <= 1)
        {
            flag = false;
        }
        else
        {
            for (int j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    flag = false;
                    break;
                }
            }
        }

        if (flag == true)
        {
            cout << i << " ";
        }
    }

    return 0;
}
*/
