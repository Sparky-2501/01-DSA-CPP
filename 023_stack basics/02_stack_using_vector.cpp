#include <bits/stdc++.h>
using namespace std;

//stack using vector
class Stack{

    vector<int> vec;

    public:
    void push(int x){
        vec.push_back(x);
    }
    void pop(){
        if(vec.empty()){
            cout << "Stack Underflow" << endl;
            return;
        }
        vec.pop_back();
    }
    int peek(){
        if(vec.empty()){
            cout << "Stack is empty" << endl;
            return -1;
        }
        return vec.back();
    }
    bool isEmpty(){
        return vec.size() == 0;
    }
};
int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    while(!s.isEmpty()){
        cout << s.peek() << endl;
        s.pop();
    }
    return 0;
}