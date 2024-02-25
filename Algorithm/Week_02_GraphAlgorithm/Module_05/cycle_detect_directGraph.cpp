#include <bits/stdc++.h>
using namespace std;
const int N = 1e+5;
vector<int> adj[N];
int checkList[N];
int pathCheck[N];
void dfs(int src)
{
    checkList[src] = 1;
    pathCheck[src] = 1;
    // cout << src << " ";
    for (int child : adj[src])
    {
        if (pathCheck[child])
        {
            cout << child << " "
                 << "Yes" << endl;
        }
        if (!checkList[child])
        {
            dfs(child);
        }
    }
    pathCheck[src] = 0;
}
int main()
{
    int e;
    cin >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }
    memset(checkList, 0, sizeof(checkList));
    memset(pathCheck, 0, sizeof(pathCheck));
    // for (int i = 0; i < 6; i++)
    // {
    //     dfs(i);
    // }
    dfs(2);
    return 0;
}