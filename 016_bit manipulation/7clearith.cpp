#include<bits/stdc++.h>
using namespace std;

int main(){
    /* Clear the i-th bit of a number :
        for position i if 0->0 if 1->0
    */
   /*
   eg n=6 i=1
    0110 & ~(1 << 1)
    0110 & ~(0010)
    0110 & 1101
    0100
    4(0110 -> 0100 : position 1 clears to 0)
   */
   int n,i;
   cin >> n >> i;
   cout << (n & (~(1 << i))) << endl;
    return 0;
}