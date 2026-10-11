#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{

    if (n < 3)
    {
        return n;
    }
    vector<int> vct(n + 1, 0);
    vct[1] = 1;
    vct[2] = 2;

    for (int i = 3; i <= n; i++)
    {
        vct[i] = vct[i - 1] + vct[i - 2];
    }

    return vct[n];
}

main()
{
    cout << solve(4);
    return 0;
}