// Program to Check Whether Number is Even or Odd

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n << " is even.";
    }
    else
    {
        cout << n << " is odd.";
    }
    return 0;
}


//Another way
/*#include <iostream> 
using namespace std; 
  
// Returns true if n is 
// even, else odd 
bool isEven(int n) { return (n % 2 == 0); } 
  
// Driver code 
int main() 
{ 
    int n = 101; 
    if (isEven(n)) 
        cout << "Even"; 
    else
        cout << "Odd"; 
  
    return 0; 
}
*/