//nCr = n!/r!*(n-r)!

#include<iostream>
using namespace std;

int fact(int num){
    int factorial=1;
    for(int i=1 ; i<=num ; i++){
        factorial *=i;
    }
    return factorial;
}

int binCoeff(int n, int r){
    int val1 = fact(n);
    int val2 = fact(n-r);
    int val3 = fact(r);

    int result = val1 / (val2*val3);
    return result;
}

int main(){
    cout<< binCoeff(4,2);
    return 0;
}