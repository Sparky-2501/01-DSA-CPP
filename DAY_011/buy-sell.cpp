#include <bits/stdc++.h>
using namespace std;

void maxprofit(int *prices, int size){
    int bestbuy[100000];
    bestbuy[0] = INT_MAX;
    for(int i =1 ; i< size ; i++){
        bestbuy[i] = min(bestbuy[i-1] , prices[i-1]);
    }
    int maxprofit= 0;
    for(int i = 0 ; i< size ; i++){
        int currprofit = prices[i] - bestbuy[i];
        maxprofit =max(currprofit,maxprofit);
    }
    cout<< "maxprofit: "<<maxprofit <<'\n';
}

int main() {
    //each day -sell day so find the best buying price before that day 
    // i = 3   j = 0,1,2    min(i,j)= profit 
    int prices1[6] = {7,1,5,3,6,4};
    int prices2[6] = {7,6,5,4,3,2};
    int n1 = sizeof(prices1)/sizeof(prices1[0]);
    int n2 = sizeof(prices2)/sizeof(prices2[0]);
    maxprofit(prices1,n1);
    maxprofit(prices2,n2);
    return 0;
}