#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=7,dig=2;

    for(int i=0 ; i < dig ; i++){
        n = n & ~(1 << i);
    }
    cout << n << endl;
    return 0;
}

/*
i   n       1<<i    ~(1<<i)   n & ~(1<<i)
0   0111   0001       1110      0110
1   0110   0010       1101      0100
2   0100   0100       1011      0000

*/