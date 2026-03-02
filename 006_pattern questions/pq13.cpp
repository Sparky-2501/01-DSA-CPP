// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
/*
                1 
              2 1 2
            3 2 1 2 3
          4 3 2 1 2 3 4
        5 4 3 2 1 2 3 4 5
*/
    int n=5;
    for(int i=1 ; i<=n ; i++){
        for(int j=n-i ; j>=1 ; j--){
            cout<<"  ";
        }
        for(int j=i; j>=1 ; j--){
            cout<<j<<" ";
        }
        for(int j=2 ; j<=i ; j++){
            cout<<j<<" ";
        }
        cout<<"\n";
        
    }
    return 0;
}