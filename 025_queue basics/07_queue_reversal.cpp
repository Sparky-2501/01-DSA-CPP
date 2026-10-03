#include <iostream>
#include<queue>
#include<stack>
using namespace std;

void reverse(queue<int> &q){
    stack<int> st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    
}

int main(){
    queue<int> q;
    for(int i=0 ; i<5 ; i++){
        q.push(i+1);
    }
    
    reverse(q);
    cout << "reversed:\n";
    
    while(!q.empty()){
        cout << q.front()<<"\n";
        q.pop();
    }
    return 0;
}