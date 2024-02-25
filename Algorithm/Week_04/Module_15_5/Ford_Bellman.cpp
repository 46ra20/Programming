#include <bits/stdc++.h>
using namespace std;
int dis[100];
class Edge
{
public:
    int u, v, c;
    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
int main()
{
    int n, m;
    cin >> n >> m;
    vector<Edge> edgeList;
    while (m--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edgeList.push_back(Edge(u, v, w));
    }
    for (int i = 1; i <= n; i += 1)
        dis[i] = INT_MAX;
    dis[1] = 0;
    for (int i = 1; i < n; i++)
    {
        for (auto e : edgeList)
        {
            if (dis[e.u] < INT_MAX && dis[e.u] + e.c < dis[e.v])
            {
                dis[e.v] = dis[e.u] + e.c;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (dis[i] == INT_MAX)
            cout << 30000 << " ";
        else
            cout << dis[i] << " ";
    }
    return 0;
}