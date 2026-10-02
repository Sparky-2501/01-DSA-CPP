//circular queue using array
 /*
 1 front pointer and another rear pointer at arr[0] & arr[arr.size() - 1].
 
 push => rear++ 
         push
        logic rear+1%size
 pop => front++
        logic front+1%size  

 */
 #include<bits/stdc++.h>
using namespace std;

class Queue {
	int* arr; //dynamic allocation
	int capacity;
	int currSize;
	int f,r;

public:
	Queue(int capacity) {
		this->capacity = capacity;
		arr = new int[capacity]; // memory allocation of its capacity
		currSize=0;
		f=0;
		r =-1;
	}

	void push(int data) {
		if(currSize == capacity) {
			cout << "Queue is full.";
			return;
		}
		r = (r+1)%capacity;
		arr[r] = data;
		currSize++;
	}
	void pop() {
		if(empty()) {
			cout << "Queue is empty.";
			return;
		}
		f = (f+1)%capacity;
		currSize--;

	}
	int top() {
		if(empty()) {
			return -1;
		}
		return arr[f];
	}
	bool empty() {
		return currSize ==0;
	}
};

int main() {
	Queue q(4);

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	cout << "\n";
	cout << "expected:1  actual:"<< q.top()<<endl;
	q.pop();
	cout << "expected:2  actual:"<< q.top()<<endl;
	q.pop();
	cout << "expected:3  actual:"<< q.top()<<endl;
	q.pop();
	cout << "expected:4  actual:"<< q.top()<<endl;
	q.pop();
	cout << "expected:4  actual:"<< q.top()<<endl;
}