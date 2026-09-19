#include <bits/stdc++.h>
using namespace std;
//pushAtBottom using push pop top 

void pushAtBottom(stack<int> &s , int val){
    if(s.empty()){
        s.push(val);
        return;
    }

    int temp = s.top();
    s.pop();
    pushAtBottom(s,int val);
    s.push(temp);
}
int main() {
    
    return 0;
}