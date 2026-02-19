#include <bits/stdc++.h>
using namespace std;

int main() {
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