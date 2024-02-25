// 1st attamp

// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 5;
// vector<int> adj[N];
// int vis[N];
// int par[N];
// int c = 0, fl = 0;
// void bsf(int src)
// {
//     queue<int> q;
//     q.push(src);
//     vis[src] = 1;
//     while (!q.empty())
//     {
//         int x = q.front();
//         q.pop();
//         for (int a : adj[x])
//         {
//             if (vis[a] && par[x] != a)
//             {
//                 fl = 1;
//             }
//             if (!vis[a])
//             {
//                 q.push(a);
//                 par[a] = x;
//                 // vis[a] = 1;
//             }
//         }
//     }
// }
// int main()
// {
//     int n, e;
//     cin >> n >> e;
//     while (e--)
//     {
//         int a, b;
//         cin >> a >> b;
//         adj[a].push_back(b);
//         adj[b].push_back(a);
//     }
//     memset(vis, 0, sizeof(vis));
//     memset(par, -1, sizeof(par));

//     for (int i = 1; i <= n; i++)
//     {
//         // cout << i << ": ";
//         for (auto a : adj[i])
//         {
//             if (!vis[a])
//             {
//                 fl = 0, bsf(a);
//                 if (fl)
//                     c++;
//             }
//         }
//     }
//     cout << c << endl;
//     return 0;
// }

// 2nd attamp

// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 5;
// int vis[N];
// int par[N];
// int fl = 0;
// vector<int> adj[N];

// void dfs(int src, int track)
// {
//     vis[src] = 1;
//     for (int i : adj[src])
//     {
//         if (vis[i] && par[i] == src)
//         {
//             fl = 1;
//         }
//         if (!vis[i])
//         {
//             dfs(i, track);
//         }
//     }
//     vis[src] = 0;
//     vis[track] = 1;
// }
// void bfs(int src)
// {
//     vis[src] = 1;
//     for (int a : adj[src])
//     {
//         if (vis[a] && par[src] != a)
//         {
//             fl = 1;
//         }
//         if (!vis[a])
//         {
//             // q.push(a);
//             par[a] = src;
//             // vis[a] = 1;
//         }
//     }
// }
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     while (m--)
//     {
//         int a, b;
//         cin >> a >> b;
//         adj[a].push_back(b);
//         adj[b].push_back(a);
//     }
//     int counter = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         for (auto c : adj[i])
//         {
//             if (!vis[c])
//             {
//                 fl = 0;
//                 // dfs(c, c);
//                 bfs(c);
//                 if (fl)
//                     counter++;
//             }
//         }
//     }
//     cout << counter << endl;
//     return 0;
// }

//////cycle
/// 1st attamp
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// const int N = 1e5 + 10;
// ll dis[N];
// vector<pair<int, int>> edge[N];
// class cmp
// {
// public:
//     bool operator()(pair<int, ll> a, pair<int, ll> b)
//     {
//         return a.second > b.second;
//     }
// };
// void bfs(int src)
// {
//     priority_queue<pair<int, ll>, vector<pair<int, ll>>, cmp> q;
//     q.push({src, 0});
//     dis[src] = 0;
//     while (!q.empty())
//     {
//         auto pa = q.top();
//         q.pop();
//         for (auto child : edge[pa.first])
//         {
//             if (child.second + pa.second < dis[child.first])
//             {
//                 dis[child.first] = child.second + pa.second;
//                 q.push({child.first, dis[child.first]});
//             }
//         }
//     }
// }
// int main()
// {
//     int n, e;
//     cin >> n >> e;
//     while (e--)
//     {
//         int a, b, c;
//         cin >> a >> b >> c;
//         edge[a].push_back({b, c});
//         edge[b].push_back({a, c});
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         dis[i] = 1e18;
//     }
//     bfs(1);
//     cout << dis[n];
//     return 0;
// }

////are of component

// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 5;
// int vis[N][N];
// int n, m;
// vector<char> grid[N];
// bool valid(int si, int sj)
// {
//     return si >= 0 && si < n && sj >= 0 && sj < m;
// }
// void bfs(int i, int j)
// {
//     queue<pair<int, int>> q;
//     int c = 0;
//     q.push({i, j});
//     vis[i][j] = 1;
//     vector<pair<int, int>> moves = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
//     while (!q.empty())
//     {
//         auto pa = q.front();
//         q.pop();
//         c++;
//         for (auto m : moves)
//         {
//             int x = pa.first + m.first;
//             int y = pa.second + m.second;
//             if (valid(x, y) && !vis[x][y] && grid[x][y] == '.')
//             {
//                 q.push({x, y});
//                 vis[x][y] = 1;
//             }
//         }
//     }
//     cout << c << endl;
// }
// int main()
// {
//     cin >> n >> m;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; i++)
//         {
//             char ch;
//             cin >> ch;
//             grid[i].push_back(ch);
//         }
//     }
//     memset(vis, 0, sizeof(vis));
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (!vis[i][j] && grid[i][j] == '.')
//             {
//                 bfs(i, j);
//             }
//         }
//     }
//     // cout << mn << endl;
//     return 0;
// }