#include <bits/stdc++.h>
using namespace std;
#define ll long long int
class Edge
{
public:
    int u, v, c;
    Edge(ll u, ll v, ll c)
    {
        this->u = u;
        this->c = c;
        this->v = v;
    }
};
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> edgeList;
    ll costList[n + 4];
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edgeList.push_back(Edge(a, b, c));
    }
    for (int i = 0; i <= n; i++)
    {
        costList[i] = LONG_LONG_MAX;
    }

    int s;
    cin >> s;
    costList[s] = 0;
    for (int i = 1; i < n - 1; i++)
    {
        for (auto ed : edgeList)
        {
            int u = ed.u;
            int v = ed.v;
            int c = ed.c;
            if (costList[u] < LONG_LONG_MAX && costList[u] + c < costList[v])
            {
                costList[v] = costList[u] + c;
            }
        }
    }

    bool nc = false;

    for (auto ed : edgeList)
    {
        int u = ed.u;
        int v = ed.v;
        int c = ed.c;
        if (costList[u] < LONG_LONG_MAX && costList[u] + c < costList[v])
        {
            nc = true;
        }
    }
    // cout << nc << endl;

    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        if (nc)
        {
            cout << "Negative Cycle Detected" << endl;
            break;
        }
        if (costList[d] == LONG_LONG_MAX)
            cout << "Not Possible" << endl;
        else
            cout << costList[d] << endl;
    }
    return 0;
}