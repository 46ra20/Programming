#include <bits/stdc++.h>
using namespace std;
int vis[105];
vector<int> edge[105];
void dfs(int s)
{
    vis[s] = 1;
    for (auto child : edge[s])
    {
        if (!vis[child])
        {
            dfs(child);
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        edge[u].push_back(v);
        edge[v].push_back(u);
    }
    memset(vis, 0, sizeof(vis));
    dfs(1);
    bool fl = 1;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
            fl = 0;
    }
    if (fl)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}