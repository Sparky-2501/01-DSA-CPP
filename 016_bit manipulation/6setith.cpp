#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Set the i-th bit of a number :
    for i position if 0->1 if 1->1
    */
    int n, i;
    cin >> n >> i;
    n |= (1 << i);
    cout << n << endl;
    return 0;
}
