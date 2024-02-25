#include <bits/stdc++.h>
using namespace std;
const int N = 1e+5;
int level[N];
int parent[N];
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
    if (level[leaderA] > level[leaderB])
    {
        parent[leaderB] = leaderA;
    }
    else if (level[leaderB] > parent[leaderA])
    {
        parent[leaderA] = leaderB;
    }
    else
    {
        parent[leaderA] = leaderB;
        leaderB++;
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        level[i] = 0;
    }

    parent[8] = 9;
    parent[9] = 5;
    parent[5] = 7;

    parent[0] = 4;
    parent[4] = 3;
    parent[3] = 2;
    parent[2] = 1;
    dsu_union(9, 4);
    cout << find(9) << " " << find(4) << endl;
    return 0;
}