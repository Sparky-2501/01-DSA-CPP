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


    void pop_front() {
        if (head == NULL) {
            cout << "List is empty. Cannot pop from front.\n";
            return;
        }

        Node* temp = head;
        head = head->next;

        if (head != NULL) { //handle single element
            head->prev = NULL;
        } else {
            tail = NULL; // List is empty
        }
        delete temp;
    }

    void printList() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    Doublylist dll;
    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);
    dll.printList();
    return 0;
}