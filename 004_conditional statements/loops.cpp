#include<iostream>
using namespace std;

int main(){
    long long num;
    cin>>num;
    long long fact=1;
    for(int i=1 ; i<=num ; i++){
        fact *=i;
    }
    cout<<fact<<endl;
    return 0;
}