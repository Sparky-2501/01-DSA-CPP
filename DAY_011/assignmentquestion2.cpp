#include <bits/stdc++.h>
using namespace std;

int search(int *nums, int target, int n)
{
    int beg = 0, end = n - 1;

    while (beg <= end)
    {
        int mid = (beg + end) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] >= nums[beg])
        {
            if (nums[beg] <= target && target <= nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                beg = mid + 1;
            }
        }
        else
        {
            //[0,1,2,3,4]
            if (nums[end] >= target && target >= nums[mid])
            {
                beg = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 0;
    cout << search(arr, target, n) << endl;
    return 0;
}