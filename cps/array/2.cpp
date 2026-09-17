#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 1};
    int totoise = nums[nums[0]];
    int hare = nums[nums[nums[0]]];
    while (totoise != hare)
    {
        totoise = nums[totoise];
        hare = nums[nums[hare]];
    }
    return 0;
}