#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
vector<int> edge[N];
int vis[N];
int path[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = 1;
    path[s] = 0;
    while (!q.empty())
    {
        int pa = q.front();
        q.pop();
        for (auto child : edge[pa])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = 1;
                path[child] = path[pa] + 1;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            if (x)
                edge[i + 1].push_back(j + 1);
        }
    }
    memset(path, -1, sizeof(path));
    memset(vis, 0, sizeof(vis));
    bfs(e);
    int i = 1;
    for (int i = 1; i <= n; i++)
        cout << path[i] << " ";
    return 0;
}