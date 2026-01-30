#include <bits/stdc++.h>
using namespace std;

bool containDuplicate(int* nums, int n) {
    for(int i =0 ; i< n-1 ; i++){
        for(int j = i+1 ; j<n ; j++){
            if(nums[i] == nums[j]){
                cout<< "true\n";
                return true;
            }
        }
    }
    cout<< "false\n";
}

int main() {
    int nums[] = {1, 2, 3, 4};
    int n = sizeof(nums)/sizeof(nums[0]);
    containDuplicate(nums,n);
    return 0;
}