#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> vct = {9, 6, 4, 2, 3, 5, 7, 0, 1};

    int sum = 0;
    int i1 = 0;

    while (i1 < vct.size())
    {
        sum += vct[i1];
        i1++;
    }
    int ns = vct.size() * (vct.size() + 1) / 2;

    cout << sum;
}