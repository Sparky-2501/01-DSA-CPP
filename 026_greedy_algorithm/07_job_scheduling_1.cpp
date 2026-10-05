#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> a,pair<int,int> b){
    return a.second > b.second;
}

void jobScheduling(vector<pair<int,int>> job) {
	//sort by profit
	sort(job.begin(),job.end(),compare);    //O(nlogn)
	
	//choosing nonoverlapping
	int profit=job[0].second;
	int currTime = job[0].first;
	
	for(int i= 1 ; i<job.size() ; i++){
	    if(job[i].first > currTime){
	        profit+= job[i].second;
	        currTime++;
	    }
	}
	cout << "max profit: " << profit;

}


int main() {
	int n=4;
	vector<pair<int,int>> job(n, make_pair(0,0));
	job[0] = make_pair(4,20);
	job[1] = make_pair(1,10);
	job[2] = make_pair(1,40);
	job[3] = make_pair(1,30);
	jobScheduling(job);

	return 0;
}