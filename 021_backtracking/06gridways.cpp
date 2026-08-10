#include <bits/stdc++.h>
using namespace std;

int gridways(int n,int m){
    if(n==1 || m==1){
        return 1;
    }
    return gridways(n-1,m) + gridways(n,m-1);
}

int main() {
    int n = 3, m = 3;
    int count = gridways(n, m);
    cout << "Total number of ways to reach the destination: " << count << endl;
    return 0;
}
/*
_|_|_
_|_|_
_|_|_
*/ 