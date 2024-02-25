#include <bits/stdc++.h>
using namespace std;
int vis[10];
int path[10];
void bfs(vector<int> *adj, int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = 1;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for (auto child : adj[parent])
        {
            if (!vis[child])
            {
                path[child] = parent;
                vis[child] = 1;
                q.push(child);
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis, 0, sizeof(vis));
    memset(path, -1, sizeof(path));
    bfs(adj, 6);

    int x = 0;
    stack<int> s;
    while (x != -1)
    {
        // cout << x << " ";
        s.push(x);
        x = path[x];
    }
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << path[i] << " ";
    // }
    return 0;
}