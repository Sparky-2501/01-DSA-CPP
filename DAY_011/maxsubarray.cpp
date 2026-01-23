#include <bits/stdc++.h>
using namespace std;

void bruteforce(int *arr,int n){
    int maxSum =0;
    for(int i = 0 ; i < n ; i++){
        for(int j = i ; j < n ; j++){
            int currSum = 0;
            for(int k = i ; k<= j ; k++){
                currSum += arr[k];
            }
            // cout << currSum << "," ; 
            maxSum = max(maxSum , currSum);
        }   
    // cout<<"\n";
    }
    cout <<"max subarray sum is :" << maxSum;

}

int main() {
    int arr[6] = {2,-3,6,-5,4,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    bruteforce(arr,size);
    return 0;
}