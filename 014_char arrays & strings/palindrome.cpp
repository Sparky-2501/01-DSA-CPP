#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int start = 0, end = s.length() - 1;
    while (start < end) {
        if (!isalnum(s[start])) {
            start++;
        } else if (!isalnum(s[end])) {
            end--;
        } else {
            if (tolower(s[start]) != tolower(s[end])) {
                return false;
            }
            start++;
            end--;
        }
    }
    return true;
}

int main() {
    string str = "racecar";
    if (isPalindrome(str)) 
        cout << "Palindrome !!";
    else 
        cout << "Not a palindrome !!";
    return 0;
}
