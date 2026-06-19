//removing duplicates in string using recursion
#include <bits/stdc++.h>
using namespace std;

// Function to remove duplicates from a string using recursion
// Parameters:
//   s: the input string
//   index: the current index in the string
//   newString: the string being built without duplicates
//   st: an unordered set to keep track of characters that have already been added to newString


void removeDuplicates(string s, int index, string newString, unordered_set<char> &st) {
    //base case
    if (index == s.length()) {
        cout << newString << endl;
        return;
    }
    //rec case
    char currentChar = s[index];
    if (st.find(currentChar) != st.end()) {
        //duplicate character
        removeDuplicates(s, index + 1, newString, st);
    } else {
        //non duplicate character
        newString.push_back(currentChar);
        st.insert(currentChar);
        removeDuplicates(s, index + 1, newString, st);
    }
}

int main() {
    string s;
    cin >> s;
    unordered_set<char> st;
    removeDuplicates(s, 0, "", st);
    return 0;
}