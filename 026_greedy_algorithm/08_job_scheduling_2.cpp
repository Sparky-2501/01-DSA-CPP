#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b) {
    return a.second > b.second;
}

void jobScheduling(vector<pair<int,int>> job) {
    // Sort jobs by decreasing profit
    sort(job.begin(), job.end(), compare);

    // Find maximum deadline
    int maxDeadline = 0;
    for(auto j : job) {
        maxDeadline = max(maxDeadline, j.first);
    }

    // slots[i] = whether time slot i is occupied
    vector<bool> slots(maxDeadline + 1, false); // 1[f] 2[f] 3[f] 4[f]

    int profit = 0;
    for(auto j : job) {
        int deadline = j.first;
        int jobProfit = j.second;
        // Find latest available slot <= deadline
        for(int t = deadline; t >= 1; t--) {
            if(!slots[t]) {
                slots[t] = true;
                profit += jobProfit;
                break;
            }
        }
    }
    cout << "max profit: " << profit;
}

int main() {
    int n = 5;
    vector<pair<int,int>> job(n);
    job[0] = make_pair(4,20);
    job[1] = make_pair(1,10);
    job[2] = make_pair(1,40);
    job[3] = make_pair(1,30);
    job[4] = make_pair(2,10);
    jobScheduling(job);
    return 0;
}
