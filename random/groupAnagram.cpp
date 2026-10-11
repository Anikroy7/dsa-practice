#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    map<string, int> mp;
    int groupCount = 0;
    vector<vector<string>> result;
    for (auto it : strs)
    {
        string st = it;
        sort(st.begin(), st.end());
        // cout << it << " " << st << endl;
        if (mp.count(st) > 0)
        {
            int group = mp[st];
            result[group].push_back(it);
        }
        else
        {
            result.push_back({it});
            mp.insert({st, groupCount});
            groupCount++;
        }
    }

    for (auto it : result)
    {
        cout << "[ ";
        for (auto st : it)
        {
            cout << st << ", ";
        }
        cout << " ]" << endl;
    }
    return 0;
}