#include <bits/stdc++.h>
using namespace std;

// v= 1 2 3 4 5 7 6
// q:
// For unwegithed
int main()
{
    int m, n;
    cin >> m >> n;
    vector<int> graphList[m + 1];
    int u, v;
    for (int i = 1; i <= n; i++)
    {
        cin >> u >> v;
        graphList[u].push_back(v);
        graphList[v].push_back(u);
    }
    for (int i = 1; i <= m; i++)
    {
        cout << i << ": { ";
        for (auto i : graphList[i])
        {
            cout << i << " ";
        }
        cout << "}";
        cout << endl;
    }

    int visited[m + 1] = {0};         // 0 1 1 0 0 1 1
    vector<int> node_from_compoenets; // 1
    for (int i = 1; i <= m; i++)
    {
        if (visited[i] == 1)
            continue;
        node_from_compoenets.push_back(i);
        queue<int> q; // 6
        q.push(i);
        visited[i] = 1;
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            for (auto value : graphList[node])
            {
                if (!visited[value])
                {
                    visited[value] = 1;
                    q.push(value);
                }
            }
        }
    }

    cout << node_from_compoenets.size() - 1;
    cout <<endl;
    for (auto i : node_from_compoenets)
    {
        cout << i << " ";
    }
    return 0;
}