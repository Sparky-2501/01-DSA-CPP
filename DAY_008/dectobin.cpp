#include<iostream>
using namespace std;

int dectobinary(int num){
    int n=num;
    int bin = 0;
    int pow = 1;
    while(n>0){
        int dig = n%10;    // dig =1 
        bin += dig * pow;   // 1*4 = 4   bin = 1+0+4=5
        pow = pow*2;        // pow = 4
        n=n/10;     //1
    }

    return bin;
}

int main(){
    cout<< dectobinary(1000);
    return 0;
}