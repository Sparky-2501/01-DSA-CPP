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

    bool palindrome(){  //T.C:- O(N)   S.C:- O(1)
        if(head == NULL || head->next == NULL) return true; // empty list or single node is palindrome

        Node* slow = head;
        Node* fast = head;

        // Find the middle of the linked list
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse the second half of the linked list
        Node* prev = NULL;
        Node* curr = slow;
        while(curr != NULL){
            Node* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        // Compare the first half and the reversed second half
        Node* firstHalf = head;
        Node* secondHalf = prev; // 'prev' is now the head of the reversed second half
        while(secondHalf != NULL){
            if(firstHalf->data != secondHalf->data){
                return false; // Not a palindrome
            }
            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }

        return true; // Is a palindrome
    }
}

    
int main() {
    List ll;

    ll.insert(1); 
    ll.insert(2);
    ll.insert(2);
    ll.insert(1);
    ll.display();
    ll.palindrome();
    return 0;
}