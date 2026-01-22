#include <bits/stdc++.h>
using namespace std;

int binary_search(int *arr, int size, int target)
{
    int beg = 0, end = size - 1;
    while (beg <= end)
    {
        int mid = (beg + end) / 2;
        if (arr[mid] == target)
        {
            return mid+1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {23, 34, 45, 56, 67, 78, 89};
    int key = 56;
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = binary_search(arr, size,key);
    if (result == -1)
    {
        cout << "not found";
    }
    else
    {
        cout << "found at index :" << result;
    }
    return 0;
}