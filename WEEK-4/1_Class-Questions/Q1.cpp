#include <bits/stdc++.h>
using namespace std;

int main(){
    int marks[5];

    for(int i = 0; i< 5; i++){
        cin >> marks[i];
    }
    cout << marks[4] << endl;
    cout << 3[marks] << endl;
    cout << marks << endl; // starting address
    cout << *marks << endl;
    cout << *(marks + 1) << endl;
    // marks[5] = 100;
	// cout<<marks[5]<<endl;
	// cout<<marks[-1]<<endl;
    return 0;
}