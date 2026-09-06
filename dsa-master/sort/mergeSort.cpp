#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &vct, int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    vector<int> merged;
    while (low <= mid and right <= high)
    {
        if (vct[left] < vct[right])
        {
            merged.push_back(vct[left]);
            left++;
        }
        else
        {
            merged.push_back(vct[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        merged.push_back(vct[left]);
        left++;
    }

    while (right <= high)
    {
        merged.push_back(vct[right]);
        right++;
    }

    for (int i = 0; i < merged.size(); i++)
    {
        vct[low + i] = merged[i];
    }
}

void mergeSort(vector<int> &vct, int low, int high)
{
    if (low == high)
        return;
    int mid = (low + high) / 2;

    mergeSort(vct, low, mid);
    mergeSort(vct, mid + 1, high);

    merge(vct, low, mid, high);
}

int main()
{

    vector<int> vct = {3, 2,5, 4, 1, 3};

    mergeSort(vct, 0, vct.size() - 1);

    for (auto it : vct)
    {
        cout << it << " ";
    }
    return 0;
}