#include <bits/stdc++.h>
using namespace std;
int pareent[1005];
vector<int> v[1005];
vector<pair<int, int>> bad, add;
int dsu_find(int node)
{
    if (pareent[node] == -1)
    {
        return node;
    }
    int l = dsu_find(pareent[node]);
    return l;
}

void dsu_union(int a, int b)
{
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);
    pareent[leaderB] = leaderA;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        pareent[i] = -1;
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);
        if (leaderA == leaderB)
        {
            bad.push_back({a, b});
        }
        else
        {
            dsu_union(a, b);
        }
    }

    for (int i = 2; i <= n; i++)
    {
        int leaderA = dsu_find(1);
        int leaderB = dsu_find(i);
        if (leaderA != leaderB)
        {
            add.push_back({1, i});
            dsu_union(1, i);
        }
    }

    cout << bad.size() << endl;
    for (int i = 0; i < bad.size(); i++)
    {
        cout << bad[i].first << " " << bad[i].second << " " << add[i].first << " " << add[i].second << endl;
    }

    return 0;
}