#include <bits/stdc++.h>
using namespace std;

/*
6 3
30  10  60  10  60  50
1    2   3   4   5   6


*/
// itarative
int solve(vector<int> &heights, int n, int k) // n =6 k=3
{
    vector<int> costs(n);
    costs[0] = 0;

    for (int i = 1; i < n; i++) // i= 1
    {
        int mn = INT_MAX;
        for (int j = 1; j < k-1; j++) // j = 1
        {
            int totalCost = costs[i - j] + abs(heights[i] - heights[i + j]);

            if (totalCost < mn)
            {
                mn = totalCost;
            }
        }
        costs[i] = mn;
    }
    return costs[n - 1];
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> heights(n);

    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }
    cout << "result: ";
    cout << solve(heights, n, k);

    return 0;
}