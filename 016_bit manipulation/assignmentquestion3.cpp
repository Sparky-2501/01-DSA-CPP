#include <bits/stdc++.h>
using namespace std;

int main() {
// count set bit:

    int n = 10;
    int count =0;
    while(n>0){
        int dig = n & 1;  //1010 & 0001 =0
        if(dig == 1){
            count++;
        }
        n = n>>1;  //1010 >> 1 = 0101
    }
    cout << count << endl;
    return 0;
}