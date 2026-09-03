#include <bits/stdc++.h>
using namespace std;

// pop_front pop_back 

Class Node {
    public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    private:
    Node* head;
    Node* tail;

    public:
    List() {
        head = NULL;
        tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        }
        else {
            newNode->next = head;
            head = newNode;
        }
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void pop_front(){
        if(head == NULL){
            cout << "List is empty" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }
};

   void pop_back(){
    
   }


int main() {
    List ll;

    ll.push_back(1);
    ll.push_back(2);
    ll.display();
    ll.pop_front();
    ll.display();
    return 0;
}