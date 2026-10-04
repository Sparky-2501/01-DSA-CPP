#include <bits/stdc++.h>
using namespace std;

bool compare(pair<double, int> a, pair<double, int> b) {
    return a.first > b.first;
}

double fractionalKnapsack(vector<int> val, vector<int> wt, int w) {
    int n = val.size();

    vector<pair<double, int>> ratio(n);

    for (int i = 0; i < n; i++) {
        double r = val[i] / (double)wt[i];
        ratio[i] = make_pair(r, i);
    }

    sort(ratio.begin(), ratio.end(), compare);

    double ans = 0;

    for (int i = 0; i < n; i++) {
        int idx = ratio[i].second;

        if (wt[idx] <= w) {
            ans += val[idx];
            w -= wt[idx];
        } 
        else {
            ans += ratio[i].first * w;
            w = 0;
            break;
        }
    }

    cout << "Max profit: " << ans << endl;
    return ans;
}

int main() {
    vector<int> value = {60, 100, 120};
    vector<int> weight = {10, 20, 30};
    int w = 50;
    fractionalKnapsack(value, weight, w);
    return 0;
}
