#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool solve(string s, string t)
{
    if (s.size() != t.size())
        return false;
    bool res = true;
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        if (mp[s[i]])
        {
            mp[s[i]]++;
        }
        else
        {
            mp[s[i]] = 1;
        }
    }
    for (int i = 0; i < t.size(); i++)
    {
        if (mp[t[i]] > 1)
        {
            mp[t[i]]--;
        }
        else
        {
            mp.erase(t[i]);
        }
    }

    if (!mp.empty())
    {
        res = false;
    }
    return res;
}
int main()
{
    string s, t;
    cin >> s >> t;
    cout << solve(s, t);
}