#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main() {
    list<int> ll;
    ll.push_front(1);
    ll.push_back(2);
    ll.push_back(3);
    
    list<int>::iterator itr;
    for(itr = ll.begin(); itr != ll.end(); itr++){
        cout << *itr << " ";
    }

    printList(ll.head);
    return 0;
}