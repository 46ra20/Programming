#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2005;
vector<pair<ll, ll>> adj[N];
ll pathList[N];
ll dis[N];

void bfs(int s)
{
    queue<pair<ll, ll>> q;
    q.push({s, 0});
    dis[s] = 0;
    while (!q.empty())
    {
        auto pa = q.front();
        q.pop();
        for (auto c : adj[pa.first])
        {
            if (c.second + pa.second < dis[c.first])
            {
                dis[c.first] = c.second + pa.second;
                pathList[c.first] = pa.first;
                q.push({c.first, dis[c.first]});
            }
        }
    }
}
int main()
{
    ll n, m, s, f;
    cin >> n >> m;
    cin >> s >> f;
    while (m--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = 1e18;
        pathList[i] = -1;
    }

    bfs(s);

    if (dis[f] < 1e18)
    {
        cout << dis[f] << endl;
        stack<ll> st;
        ll x = f;
        while (x != -1)
        {
            st.push(x);
            x = pathList[x];
        }
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
    }
    else
        cout << "-1" << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// const int N = 2005;
// vector<pair<int, int>> edge[N];
// int pathList[N];
// ll cost[N];
// class cmp
// {
// public:
//     bool operator()(pair<int, int> a, pair<int, int> b)
//     {
//         a > b;
//     }
// };
// void bfs(int src)
// {
//     priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> q;
//     q.push({src, 0});
//     cost[src] = 0;
//     while (!q.empty())
//     {
//         auto p = q.top();
//         q.pop();
//         for (auto child : edge[p.first])
//         {
//             if (child.second + p.second < cost[child.first])
//             {
//                 cost[child.first] = child.second + p.second;
//                 pathList[child.first] = p.first;
//                 q.push({child.first, cost[child.first]});
//             }
//         }
//     }
// }
// int main()
// {
//     int n, m, s, f;
//     cin >> n >> m;
//     cin >> s >> f;
//     while (m--)
//     {
//         int a, b, c;
//         cin >> a >> b >> c;
//         edge[a].push_back({b, c});
//         edge[b].push_back({a, b});
//     }
//     memset(pathList, -1, sizeof(pathList));
//     for (int i = 0; i < n; i++)
//     {
//         cost[i] = 1e18;
//     }
//     bfs(s);
//     if (cost[f] == 1e18)
//     {
//         cout << -1 << endl;
//         return 0;
//     }
//     cout << cost[f] << endl;
//     int x = f;
//     stack<int> st;
//     while (x != -1)
//     {
//         st.push(x);
//         x = pathList[x];
//     }
//     while (!st.empty())
//     {
//         cout << st.top() << " ";
//         st.pop();
//     }
//     return 0;
// }