#include <iostream>
using namespace std;

// Node of Linked List
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Linked List class
class List {
public:
    Node* head;
    Node* tail;

    List() {
        head = NULL;
        tail = NULL;
    }

    // Insert node at the end
    void push_back(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }
};

// Print Linked List
void printList(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}


// Find middle and split the linked list
Node* splitAtMid(Node* head) {

    Node* slow = head;
    Node* fast = head->next;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* right = slow->next;

    // Break the list into two halves
    slow->next = NULL;

    return right;
}

// Merge two sorted linked lists
Node* merge(Node* left, Node* right) {

    // Dummy node to make merging easier
    Node dummy(-1);
    Node* temp = &dummy;

    while (left != NULL && right != NULL) {

        if (left->data <= right->data) {
            temp->next = left;
            left = left->next;
        }
        else {
            temp->next = right;
            right = right->next;
        }

        temp = temp->next;
    }

    // If elements are remaining in left
    if (left != NULL) {
        temp->next = left;
    }

    // If elements are remaining in right
    if (right != NULL) {
        temp->next = right;
    }

    return dummy.next;
}


// Merge Sort
Node* mergeSort(Node* head) {

    // Base case
    if (head == NULL || head->next == NULL) {
        return head;
    }

    // Split list into two halves
    Node* right = splitAtMid(head);

    // Sort both halves
    Node* leftSorted = mergeSort(head);
    Node* rightSorted = mergeSort(right);

    // Merge sorted halves
    return merge(leftSorted, rightSorted);
}


int main() {

    List ll;

    // Create Linked List
    ll.push_back(4);
    ll.push_back(2);
    ll.push_back(1);
    ll.push_back(3);
    ll.push_back(5);

    cout << "List before sorting: ";
    printList(ll.head);

    // Sort the linked list
    ll.head = mergeSort(ll.head);

    cout << "List after sorting:  ";
    printList(ll.head);

    return 0;
}



/*

#include <bits/stdc++.h>
#include <iostream>
#include <list>
using namespace std;

Node* splitAtMid(Node* head){
    Node* slow = head;
    Node* fast = head->next;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* right = slow->next;
    slow->next = NULL;
    return right;
}

Node* merge(Node* left, Node* right){
    List ans;

    while(left != NULL && right != NULL){
        if(left->data <= right->data){
            ans.push_back(left->data);
            left = left->next;
        }
        else{
            ans.push_back(right->data);
            right = right->next;
        }
    }

    while(left != NULL){
        ans.push_back(left->data);
        left = left->next;
    }

    while(right != NULL){
        ans.push_back(right->data);
        right = right->next;
    }

    return ans.head; // Assuming List has a head pointer

} 

Node* mergeSort(Node* head){

    if(head == NULL || head-> next == NULL){
        return head;
    }

    Node* right = splitAtMid(head);

    mergeSort(head);
    mergeSort(right);
    return merge(head, right);
}

int main() {
    std::list<int> ll;
    ll.push_back(4);
    ll.push_back(2);
    ll.push_back(1);
    ll.push_back(3);
    ll.push_back(5);
    // printList(ll.head); //list before sorting
    // mergeSort(ll.head);
    // printList(ll.head); //sorted list
    return 0;
}

 */