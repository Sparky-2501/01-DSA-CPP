#include <bits/stdc++.h>
using namespace std;
//floyd cycle finding algorithm

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

    void join(int n){
        Node* temp = head;

        while(temp->next !=NULL){
            temp = temp->next;
        }

        Node* middle=head;
        while(middle-> data != n){
            middle = middle->next;
        }

        temp->next=middle;

    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    bool detectCycle(){  //T.C:- O(N)   S.C:- O(1)
        if(head == NULL || head->next == NULL) return false; // empty list or single node can't have cycle

        Node* slow = head;
        Node* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) return true; // cycle detected
        }

        return false; // no cycle
    }
};

class

int main() {
    List ll;
    ll.insert(1);
    ll.insert(2);
    ll.insert(3);
    ll.insert(4);
    ll.insert(5);
    ll.insert(6);
    ll.insert(7);
    ll.join(3);
    return 0;
}