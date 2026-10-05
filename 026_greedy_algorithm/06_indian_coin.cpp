#include <bits/stdc++.h>
using namespace std;

void getChange(vector<int> coins, int v) {
	//already sorted coins

	//loop
	int ans =0;
	for(int i=coins.size()-1 ; i>=0 && v>0 ; i--) {
		if(v>=coins[i]) {
			ans += v/coins[i];
			v = v%coins[i];
		}
	}
	cout << "total coins : " << ans;
}

int main() {
	vector<int> coins = {1,2,5,10,20,50,100,500,2000};
	int v = 121;
	getChange(coins,v);

	return 0;
}