#include <bits/stdc++.h>
using namespace std;
const int N = 1e+5;
int parent[N];
int groupSize[N];
int find(int node)
{
    if (parent[node] == -1)
        return node;
    int l = find(parent[node]);
    parent[node] = l;
    return l;
}

void dsu_union(int node1, int node2)
{
    int leaderA = find(node1);
    int leaderB = find(node2);
    if (groupSize[leaderA] > leaderB)
    {
        parent[leaderB] = leaderA;
        groupSize[leaderB] += groupSize[leaderA];
    }
    else
    {
        parent[leaderA] = leaderB;
        groupSize[leaderA] += groupSize[leaderB];
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj[n];
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        groupSize[i] = 1;
    }
    bool cycle = 0;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        // adj[a].push_back(b);
        // adj[b].push_back(a);
        int leaderA = find(a);
        int leaderB = find(b);
        if (leaderA == leaderB)
            cycle = 1;
        else
            dsu_union(a, b);
    }
    if (cycle)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}