//nth fibonacchi 
#include <bits/stdc++.h>
using namespace std;

void fibonacci(int n , int a,int b){
    if(n==0){
        cout << a << endl;
        return;
    }
    if(n==1){
        cout << b << endl;
        return;
    }
    fibonacci(n-1,b,a+b);
}

int main() {
    int a=0 , b=1,n;
    cin >> n;
    fibonacci(n,a,b);
    return 0;
}