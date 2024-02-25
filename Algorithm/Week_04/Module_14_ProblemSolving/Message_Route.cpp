#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int vis[N];
vector<int> adj[N];
int path[N];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = 1;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        for (auto child : adj[x])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = 1;
                path[child] = x;
            }
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis, 0, sizeof(vis));
    memset(path, -1, sizeof(path));
    bfs(1);
    int x = n;
    stack<int> st;
    while (x != -1)
    {
        st.push(x);
        x = path[x];
    }
    if (st.size() < 2)
    {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }
    else
    {
        cout << st.size() << endl;
        while (!st.empty())
            cout << st.top() << " ", st.pop();
    }
    return 0;
}