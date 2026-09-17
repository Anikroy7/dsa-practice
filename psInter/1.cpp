#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{

    vector<int> vct = {-1, -2, -3, -4, -5};
    int tar = -8;
    map<int, int> mp;
    for (int i = 0; i < vct.size(); i++)
    {
        int dif = tar - vct[i];
        cout << dif << endl;
        if (mp.empty())
        {
            mp.insert({vct[i], 0});
        }
        else if (mp.count(dif) > 0)
        {
            cout << mp[dif] << " " << i;
            break;
        }
        else
        {
            mp.insert({vct[i], i});
        }
    }
    return 0;
}