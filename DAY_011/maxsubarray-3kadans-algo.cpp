#include <bits/stdc++.h>
using namespace std;

void kadane(int *arr, int n)
{
    int maxSum = INT_MIN;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
        //we reset the currsum later for edge cases like all negative elements 
    }
    cout << "max subarray sum is :" << maxSum << "\n";
}

int main()
{
    int positivearr[6] = {2, 1, 6, -5, -4, 2};
    int negativearr[6] = {-2, -1, -6, -5, -4, -2};
    int size1 = sizeof(positivearr) / sizeof(positivearr[0]);
    int size2 = sizeof(negativearr) / sizeof(negativearr[0]);
    
    kadane(positivearr, size1);
    kadane(negativearr, size2);
    return 0;
}