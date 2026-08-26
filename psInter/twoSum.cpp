#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{

    vector<int> vct = {2, 7, 11, 15};
    int target = 9;

    int pre[vct.size()]={0};

    for (int i = 1; i <= vct.size(); i++)
    {
        pre[i] = pre[i - 1] + vct[i-1];
    }
    for (int i = 0; i <= vct.size(); i++)
    {
        cout << pre[i]<< " ";
    }
}