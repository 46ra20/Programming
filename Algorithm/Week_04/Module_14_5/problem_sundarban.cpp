#include <bits/stdc++.h>
using namespace std;
char mat[32][32];
int n;
vector<char> adj[32];
pair<int, int> des, src;
int vis[32][32];
bool valid(int si, int sj)
{
    return !vis[si][sj] && si >= 0 && si < n && sj >= 0 && sj < n;
}
int ans = 0;
void bfs(pair<int, int> src)
{
    queue<pair<pair<int, int>, int>> q;

    q.push({src, 0});
    vis[src.first][src.second] = 1;
    vector<pair<int, int>> moves = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    while (!q.empty())
    {
        auto par = q.front();
        q.pop();
        // cout << mat[par.first.first][par.first.second];
        for (auto m : moves)
        {
            int si = m.first + par.first.first;
            int sj = m.second + par.first.second;
            if (mat[si][sj] == 'E')
                cout << par.second + 1 << endl;
            if (valid(si, sj) && mat[si][sj] == 'P')
            {
                vis[si][sj] = 1;
                q.push({{si, sj}, par.second + 1});
            }
        }
    }
    // return 0;
}
int main()
{
    // int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char x;
            cin >> x;
            if (x == 'S')
                src = {i, j};
            if (x == 'E')
                des = {i, j};

            mat[i][j] = x;
            adj[i].push_back(x);
        }
    }

    memset(vis, 0, sizeof(vis));
    bfs(src);
    return 0;
}