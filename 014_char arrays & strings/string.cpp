#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "oops concept";
    cout << str.length()<< endl;
    cout<<str.at(2) << endl;
    cout<<str[2] << endl;
    
    string str2;
    getline(cin,str2);
    cout<<str2.at(5);
    return 0;
}