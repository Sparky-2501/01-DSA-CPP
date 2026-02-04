#include <bits/stdc++.h>
using namespace std;

int main() {
    //selectionsort
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]); 
    int output[n];
    int max_ele = *max_element(arr, arr + n);
    int count[max_ele + 1] = {0};
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    for (int i = 1; i <= max_ele; i++) {
        count[i] += count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    for (int i = 0; i < n; i++) {
        cout << output[i] << " ";
    }
    
    return 0;
}