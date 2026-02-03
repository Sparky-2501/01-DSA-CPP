#include <bits/stdc++.h>
using namespace std;

int main() {
    //inbuild sort
    vector<int> v = {5, 2, 9, 1, 5, 6};
    sort(v.begin(), v.end());
    for (int num : v) {
        cout << num << " ";
    }
    return 0;
}