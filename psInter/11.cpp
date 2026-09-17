#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &nums)
{

    int res = 0;

    for (auto it : nums)
    {
        res ^= it;
    }
    return res;
}

main()
{
    vector<int> nums = {2, 2, 1};
    cout << singleNumber(nums);
    return 0;
}