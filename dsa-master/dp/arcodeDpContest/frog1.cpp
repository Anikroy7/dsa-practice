#include <bits/stdc++.h>
using namespace std;

/*
4
10 30 40 20
1   2  3  4
0  20 30
*/

// itarative
int solve(vector<int> &heights, int n)
{
    vector<int> costs(n + 1);
    costs[1] = 0;
    costs[2] = costs[1] + abs(heights[1] - heights[2]);

    for (int i = 3; i <= n; i++)
    {
        int cost1 = costs[i - 1] + abs(heights[i] - heights[i - 1]);
        int cost2 = costs[i - 2] + abs(heights[i] - heights[i - 2]);
        costs[i] = min(cost1, cost2);
    }

    return costs[n];
}

// recursive solution using dp
int solveRec(vector<int> &heights, vector<int> &costs, int n)
{
    if (n == 0)
        return 0;

    if (costs[n] != -1)
    {
        return costs[n];
    }

    int cost1 = solveRec(heights, costs, n - 1) + abs(heights[n] - heights[n - 1]);
    int cost2 = INT_MAX;
    if (n > 1)
    {
        cost2 = solveRec(heights, costs, n - 2) + abs(heights[n] - heights[n - 2]);
    }
    costs[n] = min(cost1, cost2);
    return min(cost1, cost2);
}

int main()
{
    int n;
    cin >> n;
    vector<int> heights(n + 1);
    vector<int> costs(n + 1, -1);
    for (int i = 1; i <= n; i++)
    {
        cin >> heights[i];
    }
    cout << solveRec(heights, costs, n) << endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << costs[i] << endl;
    // }
    return 0;
}