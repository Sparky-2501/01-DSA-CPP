// x to power of n
#include <bits/stdc++.h>
using namespace std;

int power(int x, int n){
    if (n == 0)
    {
        return 1;
    }
    return x * power(x, n - 1);
}

int halfPow(int x,int n){ // 2 3
    if (n == 0){
        return 1;
    }
    int half = halfPow(x, n / 2);  // 2 1 => 2 0 => 1 
    int halfPowSquared = half * half;

    if (n % 2 == 0)
    { // even
        return half * half;
    }
    return half * half * x;
}
int main(){
    int x, n;
    cout << "Enter a number and its power: ";
    cin >> x >> n;
    cout << "x to the power of n is : " << power(x, n) << endl;
    return 0;
}