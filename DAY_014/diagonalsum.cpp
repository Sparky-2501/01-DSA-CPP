#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[4][4] = {
                        {1,2,3,10},
                        {4,5,6,11},
                        {7,8,9,12},
                        {13,14,15,16}
                    };
    int row=4,col=4;
    int fd=0,sd=0,common=0;
    for(int i= 0 ; i < row ; i++){
        for(int j=0 ; j< col ; j++){
            if(i == j && i+j == row-1){
                fd +=arr[i][j];
                cout<< i << "," <<j << ":" << arr[i][j] <<  "\n ";
            }
            // if(i+j == row-1){
            //     sd += arr[i][j];
            //     cout<< i<< "," << j << ":" << arr[i][j] <<  "\n ";
            // }
            if(row %2 != 0){
                common = arr[i/2][j/2];
            }
        }
    }
    cout<< "diagonal sum is:"<< fd+sd-common << "\n";
    return 0;
}