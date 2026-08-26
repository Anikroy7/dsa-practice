
#include <bits/stdc++.h>
using namespace std;

/*
by default max heapF
*/

int main()
{

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    pq.push({1, 400});
    pq.push({13, 4});
    pq.push({134, 4});
    pq.push({11, 4});
    pq.push({11, 5});

    while (!pq.empty())
    {
        cout << pq.top().first << " " << pq.top().second;
        cout << endl;
        pq.pop();
    }

    return 0;
}