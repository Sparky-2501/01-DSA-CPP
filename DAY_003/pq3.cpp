#include<iostream>
using namespace std;

int main(){
    /*Question 5 : For any @ digit number check whether it's an Armstrong number or not.
    Armstrong number is a number that is equal to the sum of cubes of its digits.
    */
    int num,temp,sum=0;
    cout<<"enter a number:";
    cin>>num;
    temp = num;
    //173
    while(temp!=0){
        int digit = temp%10;
        sum += digit*digit*digit;
        temp/=10;
    }
    if(sum==num){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not an Armstrong number";
    }    
    return 0;
}

