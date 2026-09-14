#include <bits/stdc++.h>
using namespace std;

//create stack using array
class Stack{
    
    int* arr;
    int top;
    int size;

    public:
        Stack(int size){
            this->size = size;
            arr = new int[size];
            top = -1;
        }

        void push(int x){
            if(top == size-1){
                cout << "Stack Overflow" << endl;
                return;
            }
            top++;
            arr[top] = x;
        }

        void pop(){
            if(top == -1){
                cout << "Stack Underflow" << endl;
                return;
            }
            top--;
        }

        int peek(){
            if(top == -1){
                cout << "Stack is empty" << endl;
                return -1;
            }
            return arr[top];
        }

        bool isEmpty(){
            return top == -1;
        }
};

int main() {
    Stack s(5);
    s.push(1);  
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.peek();
    s.pop();
    s.peek();
    s.isEmpty();
    return 0;
}