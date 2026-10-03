#include <iostream>
#include<deque>
using namespace std;

class Stack {
	deque<int> deq;

public:
	void push(int data){
	    deq.push_back(data);
	}
	
	void pop(){
	    deq.pop_back();
	}
	
	int top(){
	    return deq.back();
	}
	
	bool empty(){
	    return deq.empty();
	}
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);

    while(!s.empty()){
        cout << s.top() << "\n";
        s.pop();
    }
}
