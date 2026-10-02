#include <iostream>
#include<stack>
using namespace std;

//move all elements of s1 to s2
//push data into s1
//move all elements of s2 to s1

class Queue {
	stack<int> s1;
	stack<int> s2;

public:
	void push(int data) {   //O(n)

		while(!s1.empty()) {
			s2.push(s1.top());
			s1.pop();
		}

		s1.push(data);

		while(!s2.empty()) {
			s1.push(s2.top());
			s2.pop();
		}
	}
	void pop() {    //O(1)
		s1.pop();
	}
	
	int front() {   //O(1)
		return s1.top();
	}
	
	bool empty(){
	    return s1.empty();
	}
};


int main() {
    Queue q;
    q.push(1);
    q.push(2);
    while(!q.empty()){
        cout << q.front()<< "\n";
        q.pop();
    }
	return 0;
}