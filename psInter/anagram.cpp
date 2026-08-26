#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool solve(string s, string t)
{
    int st = 0;
    int tt = 0;

    for (auto it : s)
    {
        st += it;
    }
    for (auto it : t)
    {
        tt += it;
    }
    if( st == tt) return true;
    return false;
}
int main()
{
    string s, t;
    cin >> s >> t;
    cout << solve(s, t);
}