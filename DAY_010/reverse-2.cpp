#include <bits/stdc++.h>
using namespace std;

void func(int arr[] , int size){
    int beg = 0;
    int end = size-1;
    while(beg < end){
        int temp = arr[beg];
        arr[beg] = arr[end];
        arr[end] = temp;
        beg++;
        end--;
    }
    for(int i = 0 ; i< size ; i++){
        cout << arr[i] << ", ";
    }
}

int main() {
    int arr[] = {25,50,75,100,125,150};
    int size = sizeof(arr)/sizeof(arr[0]);
    func(arr , size);
    return 0;
}