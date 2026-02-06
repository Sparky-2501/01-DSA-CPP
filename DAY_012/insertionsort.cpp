#include <bits/stdc++.h>
using namespace std;

int insertionsort(int arr[],int n){
    for(int i=1 ; i<n ; i++){
        int key = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev] > key){

            /*-------------------------------*/
            arr[prev+1] = arr[prev];
            //          or
            //swap(arr[prev],arr[prev+1]);
            /*-------------------------------*/
            prev--;
        }
        arr[prev+1] = key;
    }
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}


int main() {
    //insertionsort
    int arr[] = {5, 1, 4, 2, 8,12,67,45,23,90,67};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,n);
    return 0;
}