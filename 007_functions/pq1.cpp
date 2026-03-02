#include <iostream>
using namespace std;

bool isPrime(int num){
    for(int i=2 ; i*i<=num ; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

int main() {
    //prime number from 2 to n;
    int n=50;
    for(int i=2 ; i<=n ; i++){
        if(isPrime(i)){
            cout<< i<<" ";
        }
    }
    return 0;
}