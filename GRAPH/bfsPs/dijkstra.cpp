
#include <bits/stdc++.h>
using namespace std;

/*
by default max heapF
5 7
1 2 11
3 3 2
2 3 6
2 4 1
4 5 3
3 5 9
1 3 2
*/
const int N = 1e5;
int main()
{

    int node, edge;
    cin >> node >> edge;
    int m, n, w;
    vector<pair<int, int>> graphList[node + 1]; // [{(1, 2), (2, 3)}, {()}...]

    for (int i = 1; i <= edge; i++)
    {
        cin >> m >> n >> w;
        graphList[m].push_back(make_pair(n, w));
        graphList[n].push_back(make_pair(m, w));
    }

    vector<int> dist(node + 1, N), path(node + 1);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    pq.emplace(1, 0);
    dist[1] = 0;

    while (!pq.empty())
    {
        int currNode = pq.top().first;
        int currDist = pq.top().second;
        pq.pop();
        for (auto item : graphList[currNode])   
        {
            int totalDist = currDist + item.second;
            if (totalDist < dist[item.first])
            {
                dist[item.first] = totalDist;
                pq.emplace(item.first, totalDist);
                path[item.first] = currNode;
            }
        }
    }
    cout << endl;
    for (int i = 1; i <= node; i++)
    {
        cout << dist[i] << " ";
    }
    cout << endl;
    cout << "sagdsgdsag" << endl;

    vector<int> ans;
    ans.push_back(node);
    int curr = node;

    while (curr != 1)
    {
        curr = path[curr];
        ans.push_back(curr);
    }
    cout << endl;
    reverse(ans.begin(), ans.end());
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}