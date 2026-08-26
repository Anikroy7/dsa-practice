#include <bits/stdc++.h>
using namespace std;

// For unweighted
/*
7
1 2
3 1
4 5
4 1
3 5
3 7
5 6
*/

// int main()
// {
//     int n;
//     cin >> n;
//     int adj[n+1][n+1];
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             adj[i][j] = 0;
//         }
//     }

//     int u, v;

//     for (int i = 1; i <= n; i++)
//     {
//         cin >> u >> v;
//         adj[u][v]=1;
//         adj[v][u]=1;
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << adj[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// For weighted

/*
7
1 2 2
3 1 3
4 5 7
4 1 5
3 5 1
3 7 3
5 6 4
 */

int main()
{
    int n;
    cin >> n;
    int adj[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            adj[i][j] = 0;
        }
    }

    int u, v, w;

    for (int i = 1; i <= n; i++)
    {
        cin >> u >> v >> w;
        adj[u][v] = w;
        adj[v][u] = w;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}