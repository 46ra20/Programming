#include <bits/stdc++.h>
using namespace std;
const int N = 53;
vector<int> edge[N];
bool cycle = false;
int vis[N];
int pathVisit[N];
void dfs(int src)
{
    vis[src] = 1;
    pathVisit[src] = 1;
    for (auto child : edge[src])
    {
        if (pathVisit[child] == src)
            cycle = 1;
        if (!vis[child])
        {
            dfs(child);
        }
    }
    pathVisit[src] = 0;
}
int main()
{
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                edge[i].push_back(j);
            }
        }
    }
    memset(vis, 0, sizeof(vis));
    memset(pathVisit, 0, sizeof(pathVisit));
    for (int i = 0; i < n; i++)
    {
        for (auto e : edge[i])
        {
            dfs(e);
        }
    }

    cout << cycle << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// const int N = 53;
// vector<int> edge[N];
// bool cycle = false;
// int vis[N];
// int parent[N];
// void bfs(int src)
// {
//     queue<int> q;
//     q.push(src);
//     vis[src] = 1;
//     while (!q.empty())
//     {
//         int x = q.front();
//         // cout << x << ": ";
//         q.pop();
//         for (auto child : edge[x])
//         {
//             // cout << parent[child] << " ";
//             if (edge[x][child] == x)
//                 cycle = 1;
//             if (!vis[child])
//             {
//                 q.push(child);
//                 vis[child] = 1;
//             }
//         }
//         // cout << endl;
//     }
// }
// int main()
// {
//     int n, a;
//     cin >> n;
//     memset(parent, -1, sizeof(parent));
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             int x;
//             cin >> x;
//             if (x == 1)
//             {
//                 edge[i].push_back(j);
//                 parent[i] = j;
//                 // parent[j] = i;
//             }
//         }
//     }
//     memset(vis, 0, sizeof(vis));

//     for (int i = 0; i <= n; i++)
//     {
//         if (parent[i] != -1)
//             bfs(parent[i]);
//     }

//     cout << cycle << endl;
//     return 0;
// }