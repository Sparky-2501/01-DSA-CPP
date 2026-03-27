#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> nums = {15,45,20,2,34,35,5,44,32,30};
    vector <int> arr2;
    for(int i=0 ; i < nums.size() ; i++){
        for(int j= 0 ; j < nums.size() ; j++){
            for(int k = 0 ; k<nums.size() ; k++){
                arr2.push_back((nums[i] | nums[j]) & nums[k]);
            }
        }
    }
    int ans = 0;
    for(int x : arr2){
        ans = ans ^ x;
    }
    cout<<ans<<endl;
    return 0;
}