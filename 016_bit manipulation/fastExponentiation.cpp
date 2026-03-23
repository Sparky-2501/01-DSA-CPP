#include <bits/stdc++.h>
using namespace std;

int main() {
    // fast exponentiation:
    int a, n;
    cin >> a >> n;
    int ans = 1;
    while(n> 0){
        int last_bit = n & 1;  //1010 & 0001 =0
        if(last_bit == 1){
            ans = ans * a;
        }
        a = a * a;
        n = n>>1;  //1010 >> 1 = 0101
    }
    cout << ans << endl;            
    return 0;
}