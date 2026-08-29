#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> vct = {2, 2, 1, 4, 1, 1, 2, 2, 7,7,7,7,7,7,7,7};
    map<int, int> mp;

    for (int i = 0; i < vct.size(); i++)
    {
        if (mp[vct[i]])
        {
            mp[vct[i]]++;
        }
        else
        {
            mp[vct[i]] = 1;
        }
    }

    int maxItem = vct[0];
    for (auto item : mp)
    {
        if (item.second > mp[maxItem])
        {
            maxItem = item.first;
        }
    }
    cout << maxItem;
}