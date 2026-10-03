//first came and do not repeat

#include<iostream>
#include<queue>
using namespace std;

void firstNonRepeating(string str){ //O(n)  O(n)
    queue<char> q;
    int freq[26] ={0};
    
    for(int i=0 ; i< str.size() ; i++){
        char ch = str[i];
        q.push(ch);
        freq[ch-'a']++;
        
        while((!q.empty()) && (freq[q.front()-'a'] >1)){ // true + true 
            q.pop();
        }
        
        if(q.empty()){
            cout << "-1\n";
        }else{
            cout << q.front() << "\n";
        }
    }
}

int main(){
    string str = "aabccxb";
    firstNonRepeating(str);
    
    return 0;
}