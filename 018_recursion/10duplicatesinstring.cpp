//removing duplicates in string using recursion
#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s, int i, string newString, unordered_set<char> &st) {
    //base case
    if (i == s.length()) {
        return newString; 
    }
    //rec case
    char currentChar = s[i];
    if (st.find(currentChar) != st.end()) {    // check whether the character is already present in the set
        //duplicate character
        removeDuplicates(s, i + 1, newString, st);
    } else {
        //non duplicate character
        newString.push_back(currentChar);
        st.insert(currentChar);
        removeDuplicates(s, i + 1, newString, st);
    }

    
}

int main() {
    string s;
    cin >> s;
    unordered_set<char> st;
    removeDuplicates(s, 0, "", st);
    return 0;
}