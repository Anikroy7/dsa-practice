#include <bits/stdc++.h>
using namespace std;

pair<int, int> jobSequencing(vector<int> &deadline, vector<int> &profit)
{

    priority_queue<pair<int, int>> pq;
    vector<int> ans(profit.size() + 1, -1);

    for (int i = 0; i < deadline.size(); i++)
    {
        pq.emplace(profit[i], deadline[i]);
    }

    int pf = 0;
    int count = 0;

    while (!pq.empty())
    {
        auto it = pq.top();

        pq.pop();
        if (ans[it.second] == -1)
        {
            ans[it.second] = it.first;
            pf += it.first;
            count++;
        }
        else
        {
            for (int dl = it.second - 1; dl >= 1; dl--)
            {
                if (ans[dl] == -1)
                {
                    ans[dl] = it.first;
                    pf += it.first;
                    count++;
                    break;
                }
            }
        }
    }

    return make_pair(count, pf);
}

int main()
{

    vector<int> deadline = {4, 1, 1, 1};
    vector<int> profit = {20, 10, 40, 30};
    pair<int, int> ans = jobSequencing(deadline, profit);

    cout << ans.first << " " << ans.second;
    return 0;
}