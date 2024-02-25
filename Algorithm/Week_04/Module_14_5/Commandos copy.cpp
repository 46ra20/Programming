// #include <bits/stdc++.h>
// using namespace std;
// int path_s[105], path_d[105];
// int vis[105];
// vector<int> v[105];
// void bfs(int x, int *path)
// {
//     queue<int> q;
//     q.push(x);
//     vis[x] = 1;
//     while (!q.empty())
//     {
//         int p = q.front();
//         q.pop();
//         for (int child : v[p])
//         {
//             if (!vis[child])
//             {
//                 q.push(child);
//                 vis[child] = 1;
//                 path[child] = path[p] + 1;
//             }
//         }
//     }
// }
// int main()
// {
//     int t, j = 1;
//     cin >> t;
//     while (t--)
//     {
//         int n, r;
//         cin >> n >> r;
//         while (r--)
//         {
//             int a, b;
//             cin >> a >> b;
//             v[a].push_back(b);
//             v[b].push_back(a);
//         }
//         int s, d;
//         cin >> s >> d;
//         int ans = 0;
//         memset(path_s, 0, sizeof(path_s));
//         memset(path_d, 0, sizeof(path_d));
//         memset(vis, 0, sizeof(vis));
//         bfs(s, path_s);
//         memset(vis, 0, sizeof(vis));
//         bfs(d, path_d);
//         for (int i = 0; i < n; i++)
//             ans = max(ans, path_d[i] + path_s[i]);
//         cout << "Case " << j << ": " << ans << endl;
//         j++;
//     }
//     return 0;
// }

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