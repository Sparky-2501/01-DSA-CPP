#include <bits/stdc++.h>
using namespace std;

void method1(vector<int> arr){
    int ans = 0;
    for(int x : arr){
        ans = ans ^ x;
    }
    cout<<ans<<endl;
}

void method2(vector<int> arr){
    int a=0,b=0;
    for(int i : arr){
        a = a |i;
        b= b ^ i;
    }
    cout << (a & b) << endl;
}

void method3(vector<int> arr){
    int ans = 0;
    for(int i : arr){
        ans = ans ^ i;
    }
    cout<<ans<<endl;
}

int main() {
    vector<int> arr = {1,1,2,3,4,2,3,7,4};
    method1(arr);
    method2(arr);
    method3(arr);
    return 0;
}
/*
a ^ a = 0
a ^ 0 = a
*/