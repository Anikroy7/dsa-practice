#include <bits/stdc++.h>
using namespace std;

/* 
1 2 3 4 5 6 
*/


int main()
{
    int t;
    cin >> t;
    vector<int> vct(7);
    while (t--)
    {

        for (int i = 0; i < 7; i++)
        {
            cin >> vct[i];
        }

        sort(vct.begin(), vct.end());

        for (int i = 0; i < 6; i++)
        {
            vct[6] -= vct[i];
        }

        cout << vct[6] << endl;
    }

    return 0;
}