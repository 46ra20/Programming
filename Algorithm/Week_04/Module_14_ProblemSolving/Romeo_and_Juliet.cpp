#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int vis[N];
int path[N];
void bfs(vector<int> *v, int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = 1;
    path[src] = 0;
    while (!q.empty())
    {
        auto x = q.front();
        q.pop();
        for (auto child : v[x])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = 1;
                path[child] = path[x] + 1;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> v[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis, 0, sizeof(vis));
    memset(path, -1, sizeof(path));
    int x, y, k;
    cin >> x >> y >> k;
    bfs(v, x);
    if (path[y] != -1 && k * 2 >= path[y])
        cout << "YES"
             << endl;
    else
        cout << "NO" << endl;
    return 0;
}