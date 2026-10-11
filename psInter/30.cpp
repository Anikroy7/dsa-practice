#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> res;

    int mn = intervals[0][0];
    int mx = intervals[0][1];
    for (int i = 1; i < intervals.size(); i++)
    {
        if (intervals[i][0] <= mx)
        {
            mx = max(intervals[i][1], mx);
            continue;
        }
        res.push_back({mn, mx});
        mn = intervals[i][0];
        mx = intervals[i][1];
    }

    res.push_back({mn, mx});

    return res;
}

int main()
{

    vector<vector<int>> intervals = {
        {4,7},
        {1,4},
    };

    vector<vector<int>> res = merge(intervals);

    for (auto it : res)
    {
        cout << it[0] << " " << it[1] << endl;
    }

    return 0;
}