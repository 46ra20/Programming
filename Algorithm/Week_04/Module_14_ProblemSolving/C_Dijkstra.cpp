#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 5;
vector<pair<ll, ll>> edge[N];
// int vis[N];
int path[N];
ll parent[N];
class cmp
{
public:
    bool operator()(pair<ll, ll> a, pair<ll, ll> b)
    {
        return a.second > b.second;
    }
};
void dijkstra(vector<pair<ll, ll>> *edge)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, cmp> q;
    q.push({1, 0});
    // vis[1] = 1;
    parent[1] = 0;
    while (!q.empty())
    {
        auto par = q.top();
        // cout << par.first << " " << par.second << endl;
        q.pop();
        for (auto child : edge[par.first])
        {
            if (child.second + par.second < parent[child.first])
            {
                // vis[child.first] = 1;
                path[child.first] = par.first;
                parent[child.first] = child.second + par.second;
                q.push({child.first, parent[child.first]});
            }
        }
    }
}
int main()
{
    ll n, m;
    cin >> n >> m;
    while (m--)
    {
        ll a, b, w;
        cin >> a >> b >> w;
        edge[a].push_back({b, w});
        edge[b].push_back({a, w});
    }
    for (int i = 0; i <= n; i++)
    {
        // vis[i] = 0;
        path[i] = -1;
        parent[i] = 1e18 + 5;
    }
    dijkstra(edge);
    ll x = n;
    stack<ll> st;
    while (x != -1)
    {
        st.push(x);
        x = path[x];
    }
    if(parent[n]==1e18+5){
        cout<<"-1"<<endl;
        return 0;
    }
    while (!st.empty())
        cout << st.top() << " ", st.pop();
    return 0;
}