#include <bits/stdc++.h>
using namespace std;

int main() {
    /*   
     1= 0001
    2= 0010
    3= 0011
    4= 0100
    5= 0101
    6= 0110
    7= 0111
    8= 1000
    */
    int n;
    cin >> n;
    int count = 0;
    while (n > 0) {
        if (n & 1) {
            count++;
        }
        n = n >> 1;
    }
    cout << count << endl;
    return 0;
}