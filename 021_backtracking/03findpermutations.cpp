#include <bits/stdc++.h>
using namespace std;


void permutations(string s, string ans){
    if(s.size()==0){
        cout << ans << endl;
        return;
    }

    for(int i=0; i<s.size(); i++){
        char ch = s[i];
        string nxt = s.substr(0,i) + s.substr(i+1);
        permutations(nxt, ans+ch);
    }
}

int main() {
    string s = "abc";
    string ans ="";
    permutations(s, ans);
    return 0;
}