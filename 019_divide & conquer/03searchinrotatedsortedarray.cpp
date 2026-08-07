#include <bits/stdc++.h>
using namespace std;

// This function searches for a target value in a rotated sorted array and returns its index if found, otherwise returns -1.
// 2 pointers left and right for binary search 
//mid calculated as left + (right - left) / 2 to avoid overflow
// If the mid element is equal to the target, return mid
// If the left half is sorted, check if the target lies within that range. If it does, move the right pointer to mid - 1; otherwise, move the left pointer to mid + 1.
// If the right half is sorted, check if the target lies within that range. If it does, move the left pointer to mid + 1; otherwise, move the right pointer to mid - 1.
int searchInRotatedSortedArray(vector<int>& nums, int left, int right, int target) {

    if (left > right) {
        return -1;
    }
    
    int mid = left + (right - left) / 2;
    if(nums[mid] == target) {
        return mid;
    }

    //L1
    if(nums[left] < nums[mid]){
        if(target >= nums[left] && target < nums[mid]){
            //left half
            return searchInRotatedSortedArray(nums, left, mid - 1, target);
        }else{
            //right half
             return searchInRotatedSortedArray(nums, mid + 1, right, target);
        }
       
    }
    else{
        //L2
        if(target > nums[mid] && target <= nums[right]){
            //right half
            return searchInRotatedSortedArray(nums, mid + 1, right, target);
        }else{
            //left half
            return searchInRotatedSortedArray(nums, left, mid - 1, target);
        }
    }


    // while (left <= right) {
    //     int mid = left + (right - left) / 2;

    //     if (nums[mid] == target) {
    //         return mid;
    //     }

    //     // Check if the left half is sorted
    //     if (nums[left] <= nums[mid]) {
    //         // Target is in the left half
    //         if (nums[left] <= target && target < nums[mid]) {
    //             right = mid - 1;
    //         } else {
    //             left = mid + 1;
    //         }
    //     } else { // Right half is sorted
    //         // Target is in the right half
    //         if (nums[mid] < target && target <= nums[right]) {
    //             left = mid + 1;
    //         } else {
    //             right = mid - 1;
    //         }
    //     }
    // }
    

    return -1; // Target not found
}

//main function call
int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }   
    cin >> target;
    int result = searchInRotatedSortedArray(nums,0, nums.size() - 1, target);
    if (result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found in the array." << endl;
    }
    return 0;
}