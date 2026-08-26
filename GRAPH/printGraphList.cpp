#include <bits/stdc++.h>
using namespace std;

// For unwegithed
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> graphList[n + 1];
//     int u, v;
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> u >> v;
//         graphList[u].push_back(v);
//         graphList[v].push_back(u);
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         cout << "{ ";
//         for (auto i : graphList[i])
//         {
//             cout << i << " ";
//         }
//         cout << "}";
//         cout << endl;
//     }

//     return 0;
// }

// For weighted
// [{{1, 2}, {...}}]
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> graphList[n + 1];
    int u, v, w;
    for (int i = 1; i <= n; i++)
    {
        cin >> u >> v >> w;
        graphList[u].push_back(make_pair(v, w));
        graphList[v].push_back(make_pair(u, w));
    }

    for (int i = 1; i <= n; i++)
    {
        cout << i << ":{ ";
        for (auto [first, second] : graphList[i])
        {
            cout<<"{" << first << "," << second <<" }";
        }
        cout << "}";
        cout << endl;
    }

    return 0;
}
