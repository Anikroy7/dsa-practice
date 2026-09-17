#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> prices = {3, 2, 6, 5, 0, 3};
    int profit = 0;
    int minm = prices[0];
    for (int i = 1; i < prices.size(); i++)
    {
        int dif = prices[i] - minm;
        profit = max(profit, dif);
        minm = min(prices[i], minm);
    }

    cout << profit;
    return 0;
}