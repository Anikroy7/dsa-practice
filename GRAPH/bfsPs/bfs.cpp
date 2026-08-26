#include <bits/stdc++.h>
using namespace std;

// v= 1 2 3 4 5 7 6
// q:
// For unwegithed
int main()
{
    int n;
    cin >> n;
    vector<int> graphList[n + 1];
    int u, v;
    for (int i = 1; i <= n; i++)
    {
        cin >> u >> v;
        graphList[u].push_back(v);
        graphList[v].push_back(u);
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << i << ": { ";
    //     for (auto i : graphList[i])
    //     {
    //         cout << i << " ";
    //     }
    //     cout << "}";
    //     cout << endl;
    // }

    int visited[n + 1] = {0};
    int level[n + 1];
    queue<int> q;

    q.push(1);
    visited[1] = 1;
    level[1] = 1;

    while (!q.empty())
    {
        int node = q.front();
        cout << node << " ";
        for (auto i : graphList[node])
        {
            if (visited[i])
                continue;
            q.push(i);
            visited[i] = 1;
            level[i] = level[node] + 1;
        }
        q.pop();
    }
    cout << endl;
    cout << "level: ";
    for (int i = 1; i <= n; i++)
    {
        cout << level[i] << " ";
    }

    return 0;
}