#include <bits/stdc++.h>
using namespace std;

vector<int> findErrorNums(vector<int>& nums) {
        vector<int> arr;
        for(int i=0 ; i< nums.size() ; i++){
            if(nums[i]!=i+1){
                arr.push_back(nums[i]);
                arr.push_back(nums[i]+1);
                break;
            }
        }
        return arr;
    }

int main() {
    vector<int> nums = {1, 2, 2, 4};
    vector<int> result = findErrorNums(nums);
    for(int i=0 ; i<result.size() ; i++){
        cout<<result[i]<<" ";
    }
    return 0;
}
