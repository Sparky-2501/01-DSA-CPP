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

    ~Node() {
        cout << "~Node" << val << endl;
        if(next != NULL){
            delete next;
            next = NULL;
        }
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

    ~List(){
        cout << "~List" << endl;
        if(head != NULL){
            delete head;
            head = NULL;
        }
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

    void pop_back(){
        if(head == NULL){
            cout << "List is empty" << endl;
            return;
        }
        if(head->next == NULL){
            delete head;
            head = NULL;
            tail = NULL;
            return;
        }
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = NULL;
   }
};


int main() {
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.display();
    ll.pop_front();
    ll.display();
    ll.pop_back();
    ll.display();
    return 0;
}