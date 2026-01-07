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

    //sum of n natural numbers ;
    int n;
    cin>>n;
    int sum=0; 
    for(int i=0 ; i<=n ; i++){
        sum +=i;
    }
    cout<<sum<<endl;
    return 0;
}