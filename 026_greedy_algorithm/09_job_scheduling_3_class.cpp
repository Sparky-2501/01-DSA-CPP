#include <bits/stdc++.h>
using namespace std;

class Job{
public:
    int idx;
    int deadline;
    int profit;
    
    Job(int idx,int deadline,int profit){
        this->idx = idx;
        this -> deadline = deadline;
        this -> profit = profit;
    }
};

void jobScheduling(vector<pair<int,int>> pairs) {
    int n = pairs.size();
    vector<Job> jobs;
    
    for(int i = 0 ; i<n ; i++){
        jobs.emplace_back(i,pairs[i].first , pairs[i].second); //idx deadline profit
    }
    
    sort(jobs.begin(),jobs.end(),[](Job &a, Job &b){
        return a.profit > b.profit;
    }); // empty list , lambda function
    
    cout << "Job: " << jobs[0].idx << " profit:"<< jobs[0].profit<<endl;
    int profit = jobs[0].profit;
    int safeDeadline = 2;
    
    
    for(int i=1 ; i<n ; i++){
        if(jobs[i].deadline  > safeDeadline){
            cout << "Job: " << jobs[i].idx << " profit:" << jobs[i].profit ;
            profit +=jobs[i].profit;
            safeDeadline++;
        }
    }
    
    cout << "\nfinal profit :"<< profit;
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