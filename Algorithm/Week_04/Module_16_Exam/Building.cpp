#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 5;
int parent[N];
int level[N];
int track[N];
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
vector<Edge> edgeList;
void dsu_int(int n)
{
    for (int i = 1; i <= n; i++)
        parent[i] = -1, level[i] = 1;
}
int dsu_find(int node)
{
    if (parent[node] == -1)
        return node;
    int l = dsu_find(parent[node]);
    return l;
}
void dsu_union(int a, int b)
{

    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);
    // parent[leaderA] = leaderB;
    if (level[leaderA] > level[leaderB])
    {
        parent[leaderB] = leaderA;
        level[leaderA] += level[leaderB];
    }
    else
    {
        parent[leaderA] = leaderB;
        level[leaderB] += level[leaderA];
    }
}

bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}
int main()
{
    int n, e;
    cin >> n >> e;
    dsu_int(n);
    ll ans = 0;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        track[a] = a;
        track[b] = b;
        edgeList.push_back(Edge(a, b, c));
    }
    sort(edgeList.begin(), edgeList.end(), cmp);
    int c = 0;
    for (auto e : edgeList)
    {
        if (dsu_find(e.u) != dsu_find(e.v))
        {
            ans += e.w;
            dsu_union(e.u, e.v);
        }
        else
            c++;
    }

    int fl = 1;
    for (int i = 1; i <= n; i++)
    {
        if (track[i] != i)
            fl = 0;
    }
    if (fl)
        cout << c << " " << ans << endl;
    else
        cout << "Not Possible" << endl;
    return 0;
}