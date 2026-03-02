#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1]ascending
    vector<int> v = {5, 2, 9, 1, 5, 6};
    sort(v.begin(), v.end());
    for (int num : v)
    {
        cout << num << " ";
    }
    cout<< endl;

    //2]Descending
    sort(v.begin(), v.end() ,greater<int>());
    for (int num : v)
    {
        cout << num << " ";
    }
    return 0;
}