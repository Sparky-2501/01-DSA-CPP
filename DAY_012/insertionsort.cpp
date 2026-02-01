#include <bits/stdc++.h>
using namespace std;

int main() {
    //insertionsort
    int arr[] = {5, 1, 4, 2, 8,12,67,45,23,90,67};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=1 ; i<n ; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}