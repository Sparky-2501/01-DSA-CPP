#include <bits/stdc++.h>
using namespace std;

int main() {
    //selectionsort
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]); 
    int freq[10000];
    int min_value = INT_MAX , max_value = INT_MIN;
    
    //finding min and max element + creating freq arr
    for(int i=0; i<n ; i++){
        freq[arr[i]]++;
        min_value = min(min_value,arr[i]);
        max_value = max(max_value,arr[i]);
    }

    for(int i=min_value, j=0 ; i<=max_value ; i++){
        while(freq[i]>0){
            arr[j++] = i; 
            freq[i]--;
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}