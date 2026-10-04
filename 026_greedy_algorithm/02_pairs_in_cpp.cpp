#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> p1,pair<int,int> p2) {
	return p1.second < p2.second;
}

int main() {
	vector<int> start = {1,3,8,6};
	vector<int> end = {8,6,3,1};

	vector<pair<int,int>> pairs(4,make_pair(0,0));

	pairs[0] = make_pair(1,8);
	pairs[1] = make_pair(3,6);
	pairs[2] = make_pair(8,3);
	pairs[3] = make_pair(6,1);

	for(int i=0 ; i< pairs.size() ; i++) {
		cout << "A" <<i << ":" <<pairs[i].first << ", " << pairs[i].second<< "\n";
	}
	
	sort(pairs.begin(), pairs.end(),compare);

    cout << "---------------After sorting----------------\n";
	for(int i=0 ; i< pairs.size() ; i++) {
		cout << "A" <<i << ":" <<pairs[i].first << ", " << pairs[i].second<< "\n";
	}
	return 0;
}