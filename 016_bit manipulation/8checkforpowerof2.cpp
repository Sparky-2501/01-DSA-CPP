#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
    1= 0001
    2= 0010  *
    3= 0011
    4= 0100  *
    5= 0101
    6= 0110
    7= 0111
    8= 1000  *
    9= 1001
    10=1010
    11=1011
    12=1100
    13=1101
    14=1110
    15=1111
    16=10000 *
    for a number to be power of 2 it should have only 1 bit set in its binary representation
    1. n & (n-1) should be 0
    2. n & (n-1) should be 0 and n should not be 0 (because 0 is not a power of 2 and it also satisfies the first condition)

    2 & 1 = 0010 & 0001 = 0000
    4 & 3 = 0100 & 0011 = 0000
    8 & 7 = 1000 & 0111 = 0000
    therefore if(n & (n-1)) == 0 it may be power of 2 
    
    0 & -1 = 0000 & 1111 = 0000 (but 0 is not a power of 2)
    therefore if(n !=0) itimay be power of 2 

    */

    int n;
    cin >> n;
    if ((n & (n - 1)) == 0 && n != 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}