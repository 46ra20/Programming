#include <bits/stdc++.h>
using namespace std;
const int N = 1e+5;
int vis[N];
class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj[n];
    vector<Edge> edgeList;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        for (auto val : adj[i])
        {
            if (!vis[i])

                edgeList.push_back(Edge(i, val, 1)), vis[i] = 1;
        }
    }

    for (auto e : edgeList)
    {
        cout << e.u << " " << e.v << " " << e.w << endl;
    }
    return 0;
}