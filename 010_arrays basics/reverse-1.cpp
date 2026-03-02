#include <bits/stdc++.h>
using namespace std;

void reverse(int *arr , int size){      
    for(int i = 0 ; i<= size /2 ; i++){
        int temp = arr[i];
        arr[i] = arr[size-i+1 ];
        arr[size - i+1] = arr[i];
    }

    for(int i = 0 ; i< size ;i++ ){
        cout << arr[i] << ",";
    }
}

int main() {
    int arr[]= {1,2,4,6,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n); 
    return 0;
}