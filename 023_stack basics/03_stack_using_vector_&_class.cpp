#include <bits/stdc++.h>
using namespace std;
//stack using vector & class

template <class T>
class Stack{
    vector<T> vec;
    public:
    void push(T x){
        vec.push_back(x);
    }
    void pop(){
        if(vec.empty()){
            cout << "Stack Underflow" << endl;
            return;
        }
        vec.pop_back();
    }
    T peek(){
        if(vec.empty()){
            cout << "Stack is empty" << endl;
            return T(); // Return default-constructed object of type T
        }
        return vec.back();
    }
    bool isEmpty(){
        return vec.size() == 0;
    }
};
int main() {
    Stack<int> s;  // Stck s => Stack<int> s;  // Stack of integers
    s.push(1);
    s.push(2);
    s.push(3);
    while(!s.isEmpty()){
        cout << s.peek() << endl;
        s.pop();
    }

    Stack<char> s2;  // Stack of characters
    s2.push('a');
    s2.push('b');
    while (!s2.isEmpty()){
        cout << s2.peek() << endl;
        s2.pop();
    }
    
    return 0;
}