#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec1;

    vector<int> vec2 = {1, 2, 3};
    for (int i : vec2)
    {
        cout << i << " ";
    }
    cout << "\n";

    vector<int> vec3(5, 1);
    for (int i : vec3)
    {
        cout << i << " ";
    }
    cout << "\n";

    cout << vec3.size();
    return 0;
}