#include <bits/stdc++.h>
using namespace std;
const int N = 1e+5;
int costList[N];
void dijkstra(vector<pair<int, int>> *adj, int src)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    costList[src] = 0;
    while (!q.empty())
    {
        auto x = q.front();
        // cout << x.first << " = " << x.second << endl;
        q.pop();
        for (auto child : adj[x.first])
        {
            if (x.second + child.second < costList[child.first])
            {
                costList[child.first] = x.second + child.second;
                q.push(child);
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> adj[n];
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }
    for (int i = 0; i < n; i++)
        costList[i] = INT_MAX;
    dijkstra(adj, 0);
    for (int i = 0; i < n; i++)
        cout << costList[i] << " ";
    return 0;
}