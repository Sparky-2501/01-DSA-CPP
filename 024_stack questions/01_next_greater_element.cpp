#include <bits/stdc++.h>
using namespace std;
//next greater element = first greater element to the right

void nextGreater(vector<int> arr; vector<int> ans){
    stack<int> st;
    int idx=arr.size();
    st.push(arr[idx]);
    ans[idx] = -1;

    for(idx=idx-1 ; idx >=0 ; idx--){
        int curr = arr[idx];

        while(!st.empty() && curr >= st.top()){
            st.pop();
        }
        if(st.empty()){
            ans[idx] = -1;
        }else{
            ans[idx]= st.top();
        }
        st.push(curr);
    }

    for (int i = 0; i < span.size(); i++) {
        cout << span[i] << " ";
    }
}

int main() {
    vector<int> arr = {6,8,0,1,3};
    vector<int> ans(arr.size());
    stockSpan(stock, span);
    return 0;
}