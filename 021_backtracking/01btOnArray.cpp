#include <bits/stdc++.h>
using namespace std;

//for(i=0 to 5) -> arr[1,2,3,4,5] - > backtrack arr[-1,0,1,2,3]

void printArr(int arr[], int n){
    for(int i = 0 ; i< n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void changeArr(int arr[], int n , int i){
    if(i == n){
        printArr(arr,5);
        return ;
    }
    arr[i] =i+1;
    changeArr(arr, n,i+1);
    arr[i] -= 2;  //backtrack

}
int main() {
    int arr[5] = {0};
    changeArr(arr,5,0);
    printArr(arr,5);
    return 0;
}