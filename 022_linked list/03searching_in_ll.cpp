#include <bits/stdc++.h>
using namespace std;

//iterative search and recursive search 

class Node{
    public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List{
    public:
    Node* head;
    Node* tail;

    List() {
        head = NULL;
        tail = NULL;
    }

    void insert(int val) {
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

   void iterativeSearch(int key) {
        Node* temp = head;
        while(temp != NULL) {
            if(temp->data == key) {
                cout << "Key found: " << key << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Key not found: " << key << endl;
    }

    bool recursiveSearch(Node* node, int key) {
        if(node == NULL) {
            return false;
        }
        if(node->data == key) {
            return true;
        }
        return recursiveSearch(node->next, key);
    }

    void display() {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    } 
};

int main() {
    
    return 0;
}