// Binary String : binary string of size n without any consecutive 1's

#include <bits/stdc++.h>
using namespace std;

void binaryString(int n , int lastDigit , string output){

    if(n==0){
        cout << output << endl;
        return;
    }

    if(lastDigit == 0){
        binaryString(n-1,0,output+"0");
        binaryString(n-1,1,output+"1");
    }
    else{
        binaryString(n-1,0,output+"0");
    }
}

int main(){
    int n;
    cin >> n;
    int ans="";
    binaryString(n,0,ans);
    return 0;   
}

