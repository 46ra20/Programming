#include <bits/stdc++.h>
using namespace std;
const int N = 1e+5;
int par[N];
int find(int node)
{
    if (par[node] == -1)
        return node;
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}
void dsu_union(int a, int b)
{
    int leaderA = find(a);
    int leaderB = find(b);
    par[leaderA] = leaderB;
}
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
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> edgeList;
    memset(par, -1, sizeof(par));
    int ans = 0;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        edgeList.push_back(Edge(a, b, w));
    }
    sort(edgeList.begin(), edgeList.end(), cmp);
    for (auto e : edgeList)
    {
        if (find(e.u) == find(e.v))
            continue;
        dsu_union(e.u, e.v);
        ans += e.w;
    }
    cout << ans << endl;
    return 0;
}