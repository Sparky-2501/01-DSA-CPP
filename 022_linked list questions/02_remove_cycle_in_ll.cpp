#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next= NULL;
    }
};

class List{
    public:
    Node* head = NULL;
    Node* tail = NULL;

    void insert(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void removeCycle(){  //T.C:- O(N)   S.C:- O(1)
        if(head == NULL || head->next == NULL) return; // empty list or single node can't have cycle

        Node* slow = head;
        Node* fast = head;

        // Detect cycle using Floyd's algorithm
        do {
            if(fast == NULL || fast->next == NULL) return; // No cycle
            slow = slow->next;
            fast = fast->next->next;
        } while(slow != fast);

        // Find the start of the cycle
        slow = head;
        while(slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        // Remove the cycle
        Node* prev = NULL;
        while(fast->next != slow) {
            prev = fast;
            fast = fast->next;
        }
        prev->next = NULL; // Break the cycle
    }
};

int main() {
    List ll;
    ll.insert(1);
    ll.insert(2);
    ll.insert(3);
    ll.insert(4);
    ll.tail->next = ll.head->next; // Creating a cycle for testing
    ll.removeCycle();
    return 0;
}