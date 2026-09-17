#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> prices = {3,2,3};
    int element = prices[0];
    int count = 1;

    for (int i = 1; i < prices.size(); i++)
    {
        if (count == 0)
        {
            element = prices[i];
            count++;
        }
        else if (prices[i] == element)
        {
            count++;
        }
        else if (prices[i] != element)
        {
            count--;
        }
    }
    int mj = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] == element)
            mj++;
    }

    if (mj > (prices.size() / 2))
    {
        cout << element;
    }
    else
    {
        cout << -1;
    }

    return 0;
}