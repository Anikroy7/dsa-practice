#include <bits/stdc++.h>
#include <vector>
using namespace std;

int binarySearch(vector<int> &nums, int target, int start, int last)
{

    if (start > last)
        return -1;
    int mid = start + (last - start) / 2;
    if (nums[mid] == target)
        return mid;

    if (nums[mid] < target)
    {
        return binarySearch(nums, target, mid + 1, last);
    }
    else
    {
        return binarySearch(nums, target, start, mid - 1);
    }
}

int main()
{
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    cout << binarySearch(nums, 3, 0, nums.size() - 1);
}