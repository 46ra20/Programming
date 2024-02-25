#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> edge[N];
int vis[N];
int sPath[N];
int pathList[N];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = 1;
    sPath[src] = 0;
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
                sPath[child] = sPath[pa] + 1;
                pathList[child] = pa;
            }
        }
    }
}

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
    {
        vis[i] = 0;
        sPath[i] = -1;
        pathList[i] = -1;
    }
    bfs(a);
    if (vis[b])
    {
        cout << sPath[b] << endl;
        int x = b;
        stack<int> st;
        while (x != -1)
        {
            st.push(x);
            x = pathList[x];
        }
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
    }
    else
        cout << -1 << endl;
    return 0;
}