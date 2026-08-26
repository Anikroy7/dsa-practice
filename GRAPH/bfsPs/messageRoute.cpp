
#include <bits/stdc++.h>
using namespace std;

/*
5 5

1 2
1 3
1 4
2 3
5 4
list:
1: { 2, 3, 4}
2: { 1, 3}
3: { 1, 2}
4: { 1, 5}
5: { 4}

*/

int main()
{

    int node, edge;
    cin >> node >> edge;

    int m, n;
    vector<int> graphList[node + 1];
    for (int i = 1; i <= edge; i++)
    {
        cin >> m >> n;
        graphList[m].push_back(n);
        graphList[n].push_back(m);
    }
    /*

    visited:
             1 1 0 1 0
    q:
    p: 1 2 3 4 3 5
     */
    queue<int> q;
    int visited[node + 1];
    memset(visited, 0, sizeof(visited));

    int dist[node + 1];
    memset(dist, 0, sizeof(dist));

    q.push(1);
    visited[1]=1;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << " "; // 5
        for (auto i : graphList[node])
        {
            if (visited[i] != 1)
            {
                q.push(i);
                visited[i] = 1;
                dist[i] = dist[node] + 1;
            }
        }
    }
    cout << endl;
    for (int i = 1; i < node + 1; i++)
    {
        cout << visited[i] << " ";
    }
    cout << endl;
    for (int i = 1; i < node + 1; i++)
    {
        cout << dist[i] << " ";
    }


    

    return 0;
}