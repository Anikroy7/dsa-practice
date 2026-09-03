
#include <bits/stdc++.h>
using namespace std;

/*
Input: g = [1,2], s = [1,2,3]
Output: 2
Explanation: You have 2 children and 3 cookies. The greed factors of 2 children are 1, 2.
You have 3 cookies and their sizes are big enough to gratify all of the children,
You need to output 2.
*/

int solve(vector<int> &g, vector<int> &s)
{
        sort(s.begin(), s.end());
        sort(s.begin(), s.end());

        int gp = 0;
        int sp = 0;

        while (s.size() > sp and g.size() > gp)
        {

            if (s[sp] >= g[gp])
            {
                gp++;
                sp++;
            }
            else
            {
                sp++;
            }
        }
        return gp;
}

int main()
{
    vector<int> g = {1,2};
    vector<int> s = {1,2,3};

    /*
           g= 1 3 3 4 5
           s= 1 1 2 2 3 4

    */
    cout << solve(g, s);

    return 0;
}