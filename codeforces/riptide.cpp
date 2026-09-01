#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    int a, b, c;

    while (t--)
    {
        cin >> a >> b >> c;
        vector<int> vct = {a, b, c};
        if (vct[0] == vct[1] || vct[1] == vct[2] || vct[0] == vct[2])
        {
            cout << 0 << endl;
            continue;
        }

        int count = 0;
        sort(vct.begin(), vct.end());
        while (vct[0] != vct[1] and vct[2] != vct[1])
        {
            vct[0]++;
            vct[2]--;
            count++;
        }
        cout << count << endl;
    }

    return 0;
}