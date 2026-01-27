#include <bits/stdc++.h>
using namespace std;

void call(int *heights,int n){
    int leftmax[n];
    leftmax[0]=INT_MIN;
    cout<<leftmax[0]<<" ";
    
    for(int i=1 ; i< n ; i++){
        leftmax[i]= max(leftmax[i-1],heights[i-1]);
        cout<<leftmax[i]<<" ";
    }
}

int main() {
    //array must be started with atleast 3 values 
    //3 bars cannot be ascending or descending
    //bar1= left max
    //bar2= right max
    //min(bar1 , bar2) - bar3 = trapped water
    int heights[] ={4,2,0,6,3,2,5};
    int n = sizeof(heights)/sizeof(heights[0]);
    call(heights,n);
    return 0;
}