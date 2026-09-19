#include <bits/stdc++.h>
using namespace std;

template<class T>;
class Node{
    T data;
    Node* next;
    public:
    Node(T val){
        data =val;
        next =NULL;
    }
};

template<class T>;
class Stack{
    Node* head;
    public:
    Stack(){
        head = NULL;
    }

    void push(T val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

    void pop(){
        Node * temp = head;
        head = head-> next;
        temp->next = NULL;
        delete temp;
    }

    T top(){
        return head-> data;
    }

    bool isEmpty(){
        return head==NULL;
    }
};

int main() {
    Stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    cout << s.top();
    return 0;
}