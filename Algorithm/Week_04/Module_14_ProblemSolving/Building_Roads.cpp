#include <bits/stdc++.h>
using namespace std;
const int N = 1e+5;
int vis[N];
void bfs(vector<int> *v, int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = 1;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        for (int c : v[x])
        {
            if (!vis[c])
            {
                q.push(c);
                vis[c] = 1;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> v[n + 1];
    vector<int> l;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for (int i = 1; i <= n; i++)
        vis[i] = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            l.push_back(i);
            bfs(v, i);
        }
    }
    cout << l.size() - 1 << endl;
    int sz = l.size() - 1;
    for (int x = 0; x < sz; x++)
        cout << l[x] << " " << l[x + 1] << endl;
    return 0;
}