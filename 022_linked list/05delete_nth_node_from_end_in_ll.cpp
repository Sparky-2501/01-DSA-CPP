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

    void deleteNthFromEnd(int n){
        Node* prev = head;

        for(int i = 1; i < size - n; i++){  // n-1 is position from which we want to delete the node n 
            if(prev == NULL) return; // n is greater than the length of the list
            prev = prev->next;
        }

        Node* toDelete = prev->next; // node to be deleted
        cout << "Deleting node with value: " << toDelete->data << endl;
        prev-> next = prev->next->next; // delete the nth node from the end
    }

};

int main() {
    List ll;

    ll.insert(1);
    ll.insert(2);
    ll.insert(3);
    ll.insert(4);
    ll.display(); // display the original list
    ll.deleteNthFromEnd(2); // delete the 2nd node from the end
    ll.display(); // display the modified list
    return 0;
}