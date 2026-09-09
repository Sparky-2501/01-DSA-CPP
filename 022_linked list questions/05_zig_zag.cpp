#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
public:
    Node* head;

    List() {
        head = NULL;
    }

    void insert(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
};

Node* splitAtMid(Node* head) {
    Node* slow = head;
    Node* fast = head->next;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* right = slow->next;
    slow->next = NULL;

    return right;
}

Node* reverse(Node* head) {
    Node* prev = NULL;
    Node* curr = head;

    while (curr != NULL) {
        Node* nextNode = curr->next;

        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    return prev;
}

void assignZigZag(Node* head, Node* revRight) {
    Node* left = head;
    Node* right = revRight;
    Node* tail = right;

    while(left != NULL && right != NULL){
         Node* nextLeft = left->next;
        Node* nextRight = right->next;

        left->next = right;
        right->next = nextLeft;

        tail=right;


        left = nextLeft;
        right = nextRight;
    }
    if(right != NULL){
        tail->next = right;
    }

    return;
}

    
void zigZag(Node* head) {
    Node* right = splitAtMid(head);
    Node* revRight = reverse(right);

    assignZigZag(head, revRight);
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {

    List ll;
    ll.insert(1);
    ll.insert(2);
    ll.insert(3);
    ll.insert(4);
    ll.insert(5);

    cout << "Before zig-zag:\n";
    printList(ll.head);

    zigZag(ll.head);

    cout << "After zig-zag:\n";
    printList(ll.head);

    return 0;
}
