#include <bits/stdc++.h>
using namespace std;
int main()
{

    /*

    update min value for current index;

    */
    vector<int> vct = {1, -10, 2, 3, 20, -20, 4};

    int mn = 0;            // -10
    int max_ans = INT_MIN; // 30
    int mInx = 0;          // 4
    int minInd = 0;

    for (int i = 1; i < vct.size(); i++) // 6
    {
        // cout << mInx << " " << minInx<< endl;
        int diff = vct[i] - vct[mn]; // 14

        if (diff > max_ans)
        {
            max_ans = diff;
            mInx = i;
            minInd = mn;
        };
        if (vct[mn] > vct[i])
        {
            mn = i;
        };
    };
    cout << mInx << " " << minInd;

    return 0;
}