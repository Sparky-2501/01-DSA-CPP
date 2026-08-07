#include <bits/stdc++.h>
using namespace std;
//find the subsets of string 

void printSubstr(string str, string subset){
    if(str.size()==0){
        cout << "{"<< subset << "} , ";
        return;
    }

    char ch = str[0];
    printSubstr(str.substr(1,str.size()-1) , subset+ch);
    printSubstr(str.substr(1,str.size()-1) , subset);
}


int main() {
    string s = "abc";
    int n = s.length();

//method 1 : loop
    /*for(int i = 0; i < (1 << n); i++){
        cout << "{ ";
        for(int j = 0; j < n; j++){
            if(i & (1 << j)){
                cout << s[j] << " ";
            }
        }
        cout << "}" << endl;
    }*/

//method 2 : recursion
printSubstr(s, "");
    return 0;
}