#include <bits/stdc++.h>
using namespace std;

int binary(int arr[] , int n , int key){
    for(int i = 0 ; i< n ; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return 0;
}

int main() {
    int n=20,key=3,arr[20];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }

    int temp = binary(arr,n,key);
    if(temp == 0){
        cout << "nt in array !";
    }
    else{
        cout<< "found at:" << temp+1;
    }
    return 0;
}