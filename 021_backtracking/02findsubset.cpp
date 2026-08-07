#include <bits/stdc++.h>
using namespace std;
//find the subsets of string 
int main() {
    string s = "abc";
    int n = s.length();
    for(int i = 0; i < (1 << n); i++){
        cout << "{ ";
        for(int j = 0; j < n; j++){
            if(i & (1 << j)){
                cout << s[j] << " ";
            }
        }
        cout << "}" << endl;
    }
    return 0;
}