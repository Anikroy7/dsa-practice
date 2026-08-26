#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    int pre[n + 1] = {0};

    for (int i = 1; i <= n; i++)
    {
        pre[i] = arr[i] + pre[i - 1];
    }
    vector<int> vct;
    for (int l = 1; l <= n; l++)
    {
        for (int r = l + 1; r <= n; r++)
        {
            int total = pre[r] - pre[l - 1];
            vct.push_back(total);
        }
    }

    for(auto i : vct){
        cout << i<< endl;
    }

    cout << *max_element(vct.begin(), vct.end()) << endl;
}