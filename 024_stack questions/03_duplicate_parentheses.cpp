#include <bits/stdc++.h>
using namespace std;
 
bool isDuplicate(string str){
    stack<char> s;

    for(int i=0 ; i< str.size(); i++){
        char ch = str[i];
        if(ch != ')'){ //opening or expression
            s.push(ch);
        }else{//closing
            if(s.top() == '('){
                return true;
            }

            while(s.top() != '('){
                s.pop();
            }
            s.pop();
        }
    }
    return false;
}

int main() {
    string s1 = "((a+b))";
    string s2 = "(a+b)";
    cout << isDuplicate(s1)<<"\n";
    cout << isDuplicate(s2);

    return 0;
}