#include <bits/stdc++.h>
using namespace std;

main()
{
    vector<int> nums = {-10, -3, 0, 5, 9};

    int sum = 0;
    int maxi = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (sum > maxi)
        {
            maxi = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }

    cout << maxi;

    return 0;
}