#include <bits/stdc++.h>
using namespace std;
class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }
};
const int N = 1e+5;
int costList[N];
void dijkstra(vector<pair<int, int>> *adj, int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> q;
    q.push({src, 0});
    costList[src] = 0;
    while (!q.empty())
    {
        auto parent = q.top();
        // cout << parent.first << " " << parent.second << endl;
        q.pop();
        for (auto child : adj[parent.first])
        {
            if (parent.second + child.second < costList[child.first])
            {
                costList[child.first] = parent.second + child.second;
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
        // adj[b].push_back({a, c});
    }
    for (int i = 0; i < n; i++)
        costList[i] = INT_MAX;
    dijkstra(adj, 3);
    for (int i = 0; i < n; i++)
        cout << i << " " << costList[i] << endl;
    return 0;
}