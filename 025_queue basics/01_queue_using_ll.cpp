#include <bits/stdc++.h>
using namespace std;
//queue is a linear data structure which follows the FIFO (First In First Out) principle. 

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Queue{
private:
    Node* front;
    Node* rear;
public:
    Queue(){
        front = NULL;
        rear = NULL;
    }

    void push(int data){
        Node* newNode = new Node(data);
        if(rear == NULL){
            front = rear = newNode;
        }
        else{
            rear->next = newNode;
            rear = newNode;
        }
    }

    void pop(){
        if(front == NULL){
            cout << "Queue is empty" << endl;
            return;
        }
        Node* temp = front;
        front = front->next;
        if(front == NULL){
            rear = NULL;
        }
        delete temp;
    }

    int top(){
        if(front == NULL){
            cout << "Queue is empty" << endl;
            return -1;
        }
        return front->data;
    }
};

int main() {
    Queue q;
    q.push(1);
    q.push(2);
    cout << q.top() << endl;
    q.pop();
    cout << q.top() << endl;
    q.pop();
    cout << q.top() << endl;
    return 0;
}