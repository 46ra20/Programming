#include <bits/stdc++.h>
using namespace std;
const int N = 1e+5;
vector<int> adj[N];
int checkList[N];
int parentList[N];
bool ans;
void dfs(int src)
{
    checkList[src] = 1;
    // cout << src << " ";
    for (int child : adj[src])
    {
        if (checkList[child] && parentList[src] != child)
        {
            ans = true;
        }
        if (!checkList[child])
        {
            dfs(child);
            parentList[child] = src;
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(parentList, -1, sizeof(parentList));
    memset(checkList, 0, sizeof(checkList));
    ans = false;
    dfs(3);
    cout << ans << endl;
    return 0;
}