#include <bits/stdc++.h>
#include <vector>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int sum = 0;
    int i1 = 0;

    while (i1 < nums.size())
    {
        sum += nums[i1];
        i1++;
    }
    int ns = nums.size() * (nums.size() + 1) / 2;

    return ns - sum;
}

int main()
{
    vector<int> nums = {3,0,1};
    cout << missingNumber(nums);

    return 0;
}