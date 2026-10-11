#include <bits/stdc++.h>
using namespace std;

main()
{
    vector<int> nums = {1, 2, 3, 4};

    vector<int> output(nums.size());

    int pre = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        output[i] = pre;
        pre = nums[i] * pre;
    }

    int post = 1;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        output[i] *= post;
        post *= nums[i];
    }

    return 0;
}