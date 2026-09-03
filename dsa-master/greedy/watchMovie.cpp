#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> &x, pair<int, int> &y)
{
    if (x.first > y.first)
        return true;

    else
        return false;
}

int main()
{

    vector<pair<int, int>> vct = {{1, 2}, {2, 3}, {3, 4}, {2, 10}, {3, 5}};
    sort(vct.begin(), vct.end(), cmp);

    // first to last approach

    // int ans = 0, last = 0;
    // for (auto it : vct)
    // {

    //     if (it.first >= last)
    //     // cout << it.first << " " << it.second << " " << endl;
    //     {
    //         last = it.second;
    //         ans++;
    //     }
    // }

    // last to fast approach
    int ans = 0;
    int last = 0;

    for (auto it : vct)
    {
        cout << it.first << " " << it.second << " " << endl;
    }

    cout << "result: ";
    cout << ans << " " << last;
    return 0;
}