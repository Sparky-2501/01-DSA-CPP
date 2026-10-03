#include <iostream>
#include<queue>
using namespace std;

void interleave(queue<int> &q1){
    queue<int> q2;
    int n= q1.size();
    
    for(int i=0 ; i< n/2;i++){
        q2.push(q1.front());
        q1.pop();
    }
    
    // q1 6 7 8 9 10
    // q2 1 2 3 4 5
    
    while(!q2.empty()){
        q1.push(q2.front());
        q2.pop();
        
        q1.push(q1.front());
        q1.pop();
    }
    
    
}

int main(){
    queue<int> q1;
    for(int i=0 ; i< 10 ; i++){
        q1.push(i+1);
    }
    
    interleave(q1);
    
    while(!q1.empty()){
        cout << q1.front()<<endl;
        q1.pop();
    }
    return 0;
}