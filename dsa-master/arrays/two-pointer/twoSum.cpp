#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {3, 3};
    int target = 6;
    map<int, int> mp;

    for (int i = 0; i < nums.size(); i++)
    {
        int diff = target - nums[i];
        if (mp.contains(diff))
        {
            cout << mp[diff] << " " << i << endl;
        }
        else
        {
            mp[nums[i]] = i;
        }
    }

    return 0;
}