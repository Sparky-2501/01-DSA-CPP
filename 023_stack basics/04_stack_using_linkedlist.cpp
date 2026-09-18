#include <bits/stdc++.h>
using namespace std;
//stack using linked list
tempelate <class T>
class Stack{
    list<T> ll;

    public:
    void push(T val){
        list* newNode;
        newNode->data = val;
        newNode->next = head;
        head = newNode;
    }
}

int main() {
    
    return 0;
}