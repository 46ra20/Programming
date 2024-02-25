#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int n, m, c = 0, fl = 0;
int vis[N][N];
vector<int> edge[N];
vector<pair<int, int>> moves = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};

bool valid(int si, int sj)
{
    return si >= 0 && si < n && sj >= 0 && sj < m;
}
void dfs(int si, int sj)
{
    vis[si][sj] = 1;
    c++;
    fl = 1;
    for (auto m : moves)
    {
        int x = si + m.first;
        int y = sj + m.second;
        if (valid(x, y) && !vis[x][y] && edge[x][y] == 0)
        {
            dfs(x, y);
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char x;
            cin >> x;
            if (x == '.')
                edge[i].push_back(0);
            else
                edge[i].push_back(-1), vis[i][j] = 0;
        }
    }

    memset(vis, 0, sizeof(vis));
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && edge[i][j] == 0)
            {
                c = 0;
                dfs(i, j);
                mn = min(mn, c);
            }
        }
    }
    if (fl)
        cout << mn << endl;
    else
        cout << "-1" << endl;
    return 0;
}