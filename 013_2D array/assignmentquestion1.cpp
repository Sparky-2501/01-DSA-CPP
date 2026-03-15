#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[2][3] = {{4,3,8},{8,8,7}};
    int n=2,m=3;
    int count =0;
    for(int i=0 ; i< n ; i++){
        for(int j = 0 ; j<m ; j++){
            if(arr[i][j] == 7){
                count++;
            }
        }
    }
    cout<< count << "\n";
    return 0;
}