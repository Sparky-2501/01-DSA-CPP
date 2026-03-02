#include<iostream>
using namespace std;

int main(){
/*
        A 
        B C
        D E F
        G H I J
*/
char character = 'A';
    for(int i=1 ;i<=4 ; i++){
        for(int j=1 ;j<=i ; j++){
            cout<<character << " ";
            character++;
        }
        cout<<endl;
    }
    return 0;
}