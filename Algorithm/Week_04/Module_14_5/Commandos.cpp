#include <bits/stdc++.h>
using namespace std;
const int N = 105;
vector<int> adj[N];
int dis1[N];
int dis2[N];
int vis[N];

void bfs(int s, int i)
{
    queue<int> q;
    q.push(s);
    if (i == 1)
        dis1[s] = 0;
    if (i == 2)
        dis2[s] = 0;
    vis[s] = 1;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for (auto child : adj[parent])
        {
            if (!vis[child])
            {
                q.push(child);
                if (i == 1)
                {
                    dis1[child] = dis1[parent] + 1;
                    vis[child] = 1;
                }
                else if (i == 2)
                {
                    dis2[child] = dis2[parent] + 1;
                    vis[child] = 1;
                }
            }
        }
    }
}

int main()
{
    int t, c = 0;
    cin >> t;
    while (t--)
    {
        int n, r;
        cin >> n >> r;
        while (r--)
        {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        int s, d;
        cin >> s >> d;
        for (int i = 0; i < n; i++)
        {
            dis1[i] = -1;
            vis[i] = 0;
        }
        bfs(s, 1);
        for (int i = 0; i < n; i++)
        {
            dis2[i] = -1;
            vis[i] = 0;
        }
        bfs(d, 2);
        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
            ans = max(ans, dis1[i] + dis2[i]);
        cout << "Case " << ++c << ": " << ans << endl;
        for (int i = 0; i < n; i++)
        {
            adj[i].clear();
        }
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// vector<int> mat[105];
// int vis[105];
// int dis[105], dis1[105];
// bool f = true;
// void bfs(int s)
// {
//     queue<int> q;
//     q.push(s);
//     vis[s] = 1;
//     if (f)
//         dis[s] = 0;
//     else
//         dis1[s] = 0;
//     while (!q.empty())
//     {
//         int x = q.front();
//         q.pop();
//         for (auto child : mat[x])
//         {
//             if (!vis[child])
//             {
//                 q.push(child);
//                 vis[child] = 1;
//                 if (f)
//                     dis[child] = dis[x] + 1;
//                 else
//                     dis1[child] = dis1[x] + 1;
//             }
//         }
//     }
// }
// int main()
// {
//     int t, j = 0;
//     cin >> t;
//     while (t--)
//     {
//         int n, r;
//         cin >> n >> r;
//         while (r--)
//         {
//             int a, b;
//             cin >> a >> b;
//             mat[a].push_back(b);
//             mat[b].push_back(a);
//         }
//         int s, d;
//         cin >> s >> d;
//         for (int i = 0; i <= n; i++)
//         {
//             dis[i] = -1;
//             vis[i] = 0;
//         }
//         bfs(s);
//         f = false;
//         for (int i = 0; i <= n; i++)
//         {
//             dis1[i] = -1;
//             vis[i] = 0;
//         }
//         bfs(d);
//         int ans = 0;
//         for (int i = 0; i < n; i++)
//         {
//             ans = max(ans, dis[i] + dis1[i]);
//         }
//         cout << "Case " << ++j << ": " << ans << endl;
//     }
//     return 0;
// }