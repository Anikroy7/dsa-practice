#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vct = {37, 71};
    if (vct.size() < 2)
    {
        cout << 1 << endl;
        return 0;
        ;
    }
    int count = 0;
    for (int i = 0; i < vct.size() - 1; i++)
    {
        if (vct[i] == vct[i + 1])
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}