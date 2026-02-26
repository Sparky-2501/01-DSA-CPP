#include <bits/stdc++.h>
using namespace std;

vector<int> pairSum(vector<int> vec, int target)
{
    int i = 0, j = vec.size() - 1;
    vector<int> ans;
    while (i < j)
    {
        int sum = vec[i] + vec[j];
        if (sum == target)
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        else if (sum > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return ans;
}

int main()
{
    vector<int> vec = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = pairSum(vec, target);
    cout << ans[0] << "," << ans[1] << endl;
    ;
    return 0;
}