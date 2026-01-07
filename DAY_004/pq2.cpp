/*Practice Qs
Qs. Print the sum of digits of a number using while loop.
n = 10829
*/
#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int sum=0;
    while(num>0){
        sum += num%10;
        num /= 10;
    }
    cout<<sum<<endl;
    return 0;
}