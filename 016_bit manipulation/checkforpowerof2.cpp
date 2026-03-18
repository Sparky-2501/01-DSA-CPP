#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 8, 16,8};
    int ans=0;
    for(int i=0 ; i<6;i++){
        ans =arr[i] ^ ans;
    }
    cout << ans<<endl;

    return 0;
}