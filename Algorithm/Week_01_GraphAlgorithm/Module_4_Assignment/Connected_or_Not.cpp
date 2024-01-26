#include <bits/stdc++.h>
using namespace std;
int chekList[1003];
void bfs(vector<int> *adj, int src)
{
    queue<int> q;
    q.push(src);
    chekList[src] = 1;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for (int child : adj[parent])
        {
            if (!chekList[child])
            {
                chekList[child] = 1;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj[n + 1];
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        // adj[b].push_back(a);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        memset(chekList, 0, sizeof(chekList));
        bfs(adj, a);
        if (chekList[b])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}