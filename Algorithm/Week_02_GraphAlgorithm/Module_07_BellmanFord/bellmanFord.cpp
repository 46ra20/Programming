#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    int u, v, c;
    Edge(int u, int v, int c)
    {
        this->c = c;
        this->u = u;
        this->v = v;
    }
};
const int N = 1e+5;
int dis[N];
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> EdgeList;
    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));
    }

    // for (auto ed : EdgeList)
    // {
    //     cout << ed.u << " " << ed.v << " " << ed.c << endl;
    // }
    // cout << endl;

    for (int i = 0; i < n; i++)
        dis[i] = INT_MAX;
    dis[0] = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (auto ed : EdgeList)
        {
            int u = ed.u, v = ed.v, c = ed.c;
            if (dis[u] < INT_MAX && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << i << " -> " << dis[i] << endl;
    return 0;
}