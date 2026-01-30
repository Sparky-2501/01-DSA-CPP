#include <bits/stdc++.h>
using namespace std;

int swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    //bubblesort
    int arr[] = {5, 1, 4, 2, 8,12,67,45,23,90,67};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0 ; i<n-1 ; i++){
        for(int j=0 ; j<n-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}