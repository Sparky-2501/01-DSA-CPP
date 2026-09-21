#include <bits/stdc++.h>
using namespace std;
//RECURSION 
// Push an element at the bottom of the stack using recursion
void pushAtBottom(stack<int> &s, int val) {
    if (s.empty()) {
        s.push(val);
        return;
    }
    int temp = s.top();
    s.pop();
    pushAtBottom(s, val);
    s.push(temp);
}

// Reverse the stack using recursion
void reverseStack(stack<int> &s) {
    if (s.empty()) {
        return;
    }
    int temp = s.top();
    s.pop();
    reverseStack(s);
    pushAtBottom(s, temp);
}

// Print the stack
void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
}

int main() {
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    cout << "Original stack:" << endl;
    printStack(s);
    reverseStack(s);
    cout << "Reversed stack:" << endl;
    printStack(s);
    return 0;
}