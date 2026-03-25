#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1,1,2,3,4,2,3,7,4};
    int x=0;
    for(int i:arr){
        x = x ^i;
    }
    cout << x;
    return 0;
}
/*
a ^ a = 0
a ^ 0 = a
*/