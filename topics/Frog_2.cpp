#include <bits/stdc++.h>
using namespace std;

// itarative
int solve(vector<int> &heights, int n, int k)
{
    vector<int> costs(n + 1);
    costs[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        int cost1 = costs[i - 1] + abs(heights[i] - heights[i - 1]);
        int cost2 = INT_MAX;
        if (i > 1)
        {
            cost2 = costs[i - 2] + abs(heights[i] - heights[i - 2]);
        }
        costs[i] = min(cost1, cost2);
    }

    return costs[n];
}

int main()
{
    int n, k;
    cin >> n, k;
    vector<int> heights(n);

    for (int i = 1; i <= n; i++)
    {
        cin >> heights[i];
    }

    cout << endl;
    cout << "result: ";
    cout << solve(heights, n, k);

    return 0;
}