/*
Question 2 :Delete N Nodes After M Nodes of a Linked List
We have a linked list and two integers M and N. Traverse the linked list such that you retain M nodes and then delete next N nodes, 
continue the same till end of the linked list.
*/

#include <bits/stdc++.h>
using namespace std;

void deleteNAfterM(list<int>& ll, int M, int N) {
    auto it = ll.begin();
    while (it != ll.end()) {
        // Retain M nodes
        for (int i = 0; i < M && it != ll.end(); ++i) {
            ++it;
        }
        // Delete N nodes
        for (int i = 0; i < N && it != ll.end(); ++i) {
            it = ll.erase(it);
        }
    }
}

int main(){
    list <int> ll1;
    ll1.push_back(1);
    ll1.push_back(2);
    ll1.push_back(3);
    ll1.push_back(4);
    ll1.push_back(5);
    ll1.push_back(6);

    deleteNAfterM(ll1, 2, 2);
    return 0;
}