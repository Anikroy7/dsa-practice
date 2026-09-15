#include <bits/stdc++.h>
using namespace std;

/*
l pivot er boro kina
h pivot er soto kina
{4, 6, 7, 2, 1, 3};
    l           h
{4, 6, 7, 2, 1, 3};

       l     h
{4, 3, 7, 2, 1, 6};

         lh  l
{2, 3, 1, 4, 7, 6};

*/

int quickSort(vector<int> &vct)
{
    int low = 0;
    int pivot = vct[low];
    int high = vct.size() - 1;
    while (low < high)
    {
        if (!vct[low] > pivot)
        {
            low++;
            continue;
        }
        else if (!vct[high] < pivot)
        {
            high--;
            continue;
        }
        int temp = vct[low];
        vct[low] = vct[high];
        vct[high] = temp;
    }
    return high;
}

int main()
{

    vector<int> vct = {4, 6, 7, 2, 1, 3};
    cout <<quickSort(vct);
    for (auto it : vct)
    {
        cout << it << " ";
    }
    return 0;
}