#include <iostream>
#include<deque>
using namespace std;

class Queue {
	deque<int> deq;

public:
	void push(int data){
	    deq.push_back(data);
	}
	
	void pop(){
	    deq.pop_front();
	}
	
	int front(){
	    return deq.front();
	}
	
	bool empty(){
	    return deq.empty();
	}
};

int main() {
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    
    while(!q.empty()){
        cout << q.front()<<"\n";
        q.pop();
    }
}