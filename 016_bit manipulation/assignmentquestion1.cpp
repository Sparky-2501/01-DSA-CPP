#include<bits/stdc++.h>
using namespace std;

int bitupdate(int &num, int i, int val) {
    //update the i-th bit of num to val
    //1. clear the i-th bit
    num =num & ~(1 << i);  //7 = 7 & ~(1<<2) =>  0111 & ~(0100) => 0111 & 1011 => 0011=> 3
    
    //2. set the i-th bit to val
    num = num | (val << i); //3 = 3 | (1<<2) => 0011 | 0100 => 0111 => 7
    return num;

}

int main(){

    int num,i,val;
    cout<< "enter the number, position and value to update the bit: "<<endl;
    cin >> num >> i >> val;
    
    cout<<bitupdate(num,i,val)<<endl;
    return 0;
}