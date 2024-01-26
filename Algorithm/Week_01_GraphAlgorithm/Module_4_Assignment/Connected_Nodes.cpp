#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj[n + 1];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int i;
        cin >> i;
        sort(adj[i].begin(), adj[i].end(), greater<int>());
        if (adj[i].empty())
            cout << "-1" << endl;
        else
        {
            for (int v : adj[i])
                cout << v << " ";
            cout << endl;
        }
    }
    return 0;
}