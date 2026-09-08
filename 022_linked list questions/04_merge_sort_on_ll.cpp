#include <bits/stdc++.h>
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
    List ll;
    ll.push_back(4);
    ll.push_back(2);
    ll.push_back(1);
    ll.push_back(3);
    ll.push_back(5);
    printList(ll.head); //list before sorting
    mergeSort(ll.head);
    printList(ll.head); //sorted list
    return 0;
}