/*
Question 1 :Intersection of Two Linked Lists
In a system there are two singly linkedlist. By some programming error, the end node of one of the linkedlists got linked to the secondlist,
forming an inverted Y-shapedlist. Write a program to get the point where two linked lists merge.
*/

#include <bits/stdc++.h>
using namespace std;

class Node {
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
    List() {
        head = NULL;
    }

    void insert(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            return;
        }else{
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void printList() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    void getIntersectionNode(List& list1, List& list2) {
        Node* ptr1 = list1.head;
        Node* ptr2 = list2.head;

        // Get the lengths of both lists
        int len1 = 0, len2 = 0;
        while (ptr1 != NULL) {
            len1++;
            ptr1 = ptr1->next;
        }
        while (ptr2 != NULL) {
            len2++;
            ptr2 = ptr2->next;
        }

        // Reset pointers to the heads of the lists
        ptr1 = list1.head;
        ptr2 = list2.head;

        // Advance the pointer of the longer list by the difference in lengths
        if (len1 > len2) {
            for (int i = 0; i < len1 - len2; i++) {
                ptr1 = ptr1->next;
            }
        } else {
            for (int i = 0; i < len2 - len1; i++) {
                ptr2 = ptr2->next;
            }
        }

        // Move both pointers until they meet at the intersection point
        while (ptr1 != NULL && ptr2 != NULL) {
            if (ptr1 == ptr2) {
                cout << "Intersection at node with value: " << ptr1->data << endl;
                return;
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }

        cout << "No intersection found." << endl;
    }
};

int main() {
    List list1, list2;
    return 0;
}