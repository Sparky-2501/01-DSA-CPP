#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

class Doublylist{
public:
    Node* head;
    Node* tail;
    Doublylist() {
        head = NULL;
        tail = NULL;
    }

    void printList() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop_back() {
        if (tail == NULL) {
            cout << "List is empty. Cannot pop from back.\n";
            return;
        }

        Node* temp = tail;
        tail = tail->prev;

        if (tail != NULL) { //handle single element
            tail->next = NULL;
        } else {
            head = NULL; // List is empty
        }
        delete temp;
    }
};

int main() {
    List dll;
    dll.push_back(1);
    dll.push_back(2);
    dll.push_back(3);
    dll.printList();
    dll.pop_back();
    dll.pop_back();
    dll.printList();
    return 0;
}