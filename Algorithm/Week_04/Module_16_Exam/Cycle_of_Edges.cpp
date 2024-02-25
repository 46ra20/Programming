#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int parent[N];
int level[N];
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
int main()
{
    int n, m, c = 0;
    cin >> n >> m;
    dsu_int(n);
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);
        if (leaderA == leaderB)
        {
            // cout << "YEs" << endl;
            c++;
        }
        else
        {
            dsu_union(a, b);
        }
    }
    cout << c << endl;
    return 0;
}
