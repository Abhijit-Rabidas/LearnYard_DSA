#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<vector<int>>> vvv;
    vector<vector<int>> vv1 = {{1, 3, 4}, {4, 5, 6, 7, 8}, {}};
    vector<vector<int>> vv2 = {{3, 2, 1, 5}, {}};
    vector<vector<int>> vv3 = {{3, 4, 5, 6, 7, 8}, {1}};

    vvv.push_back(vv1);
    vvv.push_back(vv2);
    vvv.push_back(vv3);

    cout << vvv.size() << endl;
    cout << vvv[0].size() << endl;
    cout << vvv[1][0].size() << endl;
    cout << vvv[2][0][4] << endl;
    cout << sizeof(vvv[2][0][4]) << endl;

    return 0;
}