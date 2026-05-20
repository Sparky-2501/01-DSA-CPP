#include <bits/stdc++.h>
using namespace std;

//printing 1 to n

void Order(int n){
    if(n==0) return;
    Order(n-1);
    cout<< n <<" ";
}
int main() {
    //recursion in memory = stack
    int n;
    cin >> n;
    Order(n);
    return 0;
}