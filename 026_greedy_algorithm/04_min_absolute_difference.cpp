#include<bits/stdc++.h>
using namespace std;

void minAbsoluteDiff( vector<int> A, vector<int> B) {
	sort(A.begin(),A.end());  //O(nlogn)
	sort(B.begin(),B.end());  //O(nlogn)

    int absDiff=0;
	for(int i=0 ; i<A.size() ; i++) {
		absDiff += abs( A[i] - B[i]);
	}
	cout << "absDiffValue: "<<absDiff;
}

int main() {
	vector<int> A = {4,1,8,7};
	vector<int> B = {2,3,6,5};
	minAbsoluteDiff(A,B);
	return 0;
}