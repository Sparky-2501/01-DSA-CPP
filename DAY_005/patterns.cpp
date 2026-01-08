#include<iostream>
using namespace std;

int main(){
    //take input untill it is multiple of 10
    int n;
    while(true){
        cin>>n;
        if(n%10==0){
            cout<<"wrong!!"<<endl;
            break;
        }
    }
}