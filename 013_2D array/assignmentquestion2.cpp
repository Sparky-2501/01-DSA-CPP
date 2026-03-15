#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[3][3] = {{1,2,3},{4,5,6},{4,8,2}};
    int n=3 , m=3,sum=0;
    for(int i=0 ; i< m ; i++){
        sum += arr[1][i];
    }
    cout << sum;
    return 0;
}