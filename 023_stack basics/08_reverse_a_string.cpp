#include<bits/stdc++.h>
using namespace std;

string reverseString(string str){
    string ans="";
    stack<char> st;

    for(int i=0 ; i< str.size() ; i++){
        st.push(str[i]);
    }

    while(!st.empty()){
        char top = st.top();
        ans += top;
        st.pop();
    }
    return ans;
}

int main(){
    string str = "abcde";
    cout << reverseString(str); 
}