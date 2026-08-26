
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void merge(vector<int> &nums, vector<int> &mergeLists, int start, int mid, int right)
{

}

void mergeSort(vector<int> &nums, vector<int> &mergeLists, int left, int right)
{
    if (left >= right)
    {
        return;
    }

    int partition = left + (right - left) / 2;

    mergeSort(nums, mergeLists, left, partition);
    mergeSort(nums, mergeLists, partition + 1, right);

    merge(nums, mergeLists, left, partition, right);
}
int main()
{
    vector<int> nums = {1, 3, 4, 5, 7, 2};
    vector<int> mergeLists;

    mergeSort(nums, mergeLists, 0, nums.size()-1);

    for (int i = 0; i < mergeLists.size(); i++)
    {
        cout << mergeLists[i] << " ";
    }
}