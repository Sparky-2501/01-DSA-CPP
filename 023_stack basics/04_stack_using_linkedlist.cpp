#include <bits/stdc++.h>
using namespace std;
//stack using linked list
template <class T>
class Stack{
    list<T> ll;

    public:
    void push(T val){
        ll.push_front(val);
    }

    void pop(){
        if(ll.empty()){
            cout << "Stack Underflow" << endl;
            return;
        }
        ll.pop_front();
    }

    T peek(){
       return ll.front();
    }
};

int main() {
    
    return 0;
}